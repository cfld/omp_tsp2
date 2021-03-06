FROM ubuntu:18.04

# --
# Install command line tools

RUN apt-get update
RUN apt-get install -y git wget build-essential

# --
# Install miniconda python

RUN wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh
RUN bash Miniconda3-latest-Linux-x86_64.sh -b -p /anaconda
ENV PATH="/anaconda/bin:${PATH}"

# --
# Download and install omp_tsp2

RUN echo 2
RUN git clone https://github.com/cfld/omp_tsp2

RUN cd /omp_tsp2 && \
    ./install.sh && \
    make clean   && \
    make

# --
# Run omp_tsp2

CMD cd /omp_tsp2                                                 && \
    python utils/tsplib2binary.py --inpath data/tsplib/ts225.tsp && \
    ./main

