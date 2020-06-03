// lk_checkers.cpp

// Determine whether a sequential move yields a single tour

#include "main.h"

bool check2(Int* cs) {
  if(cs[0] <= cs[1]) {
    if(cs[1] <= cs[3]) {
      if(cs[3] <= cs[2]) {
         return true;
       }
     }
   }

  return false;
}

bool check3(Int* cs) {
  if(cs[0] <= cs[1]) {
    if(cs[1] <= cs[3]) {
      if(cs[3] <= cs[2]) {
        if(cs[2] <= cs[5]) {
          if(cs[5] <= cs[4]) {
             return true;
           }
         }
       }
     }
    if(cs[1] <= cs[4]) {
      if(cs[4] <= cs[2]) {
        if(cs[2] <= cs[5]) {
          if(cs[5] <= cs[3]) {
             return true;
           }
         }
       }
      if(cs[4] <= cs[5]) {
        if(cs[5] <= cs[2]) {
          if(cs[2] <= cs[3]) {
             return true;
           }
         }
        if(cs[5] <= cs[3]) {
          if(cs[3] <= cs[2]) {
             return true;
           }
         }
       }
     }
    if(cs[1] <= cs[5]) {
      if(cs[5] <= cs[4]) {
        if(cs[4] <= cs[2]) {
          if(cs[2] <= cs[3]) {
             return true;
           }
         }
       }
     }
   }

  return false;
}

bool check4(Int* cs) {
  if(cs[0] <= cs[1]) {
    if(cs[1] <= cs[3]) {
      if(cs[3] <= cs[2]) {
        if(cs[2] <= cs[5]) {
          if(cs[5] <= cs[4]) {
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                 return true;
               }
             }
           }
         }
        if(cs[2] <= cs[6]) {
          if(cs[6] <= cs[4]) {
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[5]) {
                 return true;
               }
             }
           }
          if(cs[6] <= cs[7]) {
            if(cs[7] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                 return true;
               }
             }
            if(cs[7] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                 return true;
               }
             }
           }
         }
        if(cs[2] <= cs[7]) {
          if(cs[7] <= cs[6]) {
            if(cs[6] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                 return true;
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[4]) {
      if(cs[4] <= cs[2]) {
        if(cs[2] <= cs[5]) {
          if(cs[5] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                 return true;
               }
             }
           }
         }
       }
      if(cs[4] <= cs[5]) {
        if(cs[5] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                 return true;
               }
             }
           }
         }
        if(cs[5] <= cs[3]) {
          if(cs[3] <= cs[2]) {
            if(cs[2] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                 return true;
               }
             }
           }
         }
        if(cs[5] <= cs[7]) {
          if(cs[7] <= cs[2]) {
            if(cs[2] <= cs[6]) {
              if(cs[6] <= cs[3]) {
                 return true;
               }
             }
           }
          if(cs[7] <= cs[3]) {
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                 return true;
               }
             }
           }
          if(cs[7] <= cs[6]) {
            if(cs[6] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                 return true;
               }
             }
            if(cs[6] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                 return true;
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[5]) {
      if(cs[5] <= cs[4]) {
        if(cs[4] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                 return true;
               }
             }
           }
         }
        if(cs[4] <= cs[6]) {
          if(cs[6] <= cs[2]) {
            if(cs[2] <= cs[7]) {
              if(cs[7] <= cs[3]) {
                 return true;
               }
             }
           }
          if(cs[6] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                 return true;
               }
             }
           }
          if(cs[6] <= cs[7]) {
            if(cs[7] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                 return true;
               }
             }
            if(cs[7] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                 return true;
               }
             }
           }
         }
        if(cs[4] <= cs[7]) {
          if(cs[7] <= cs[3]) {
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                 return true;
               }
             }
           }
          if(cs[7] <= cs[6]) {
            if(cs[6] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                 return true;
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[6]) {
      if(cs[6] <= cs[2]) {
        if(cs[2] <= cs[7]) {
          if(cs[7] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                 return true;
               }
             }
           }
         }
       }
      if(cs[6] <= cs[3]) {
        if(cs[3] <= cs[7]) {
          if(cs[7] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                 return true;
               }
             }
           }
         }
       }
      if(cs[6] <= cs[4]) {
        if(cs[4] <= cs[7]) {
          if(cs[7] <= cs[5]) {
            if(cs[5] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                 return true;
               }
             }
           }
         }
       }
      if(cs[6] <= cs[7]) {
        if(cs[7] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                 return true;
               }
             }
           }
         }
        if(cs[7] <= cs[3]) {
          if(cs[3] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                 return true;
               }
             }
           }
         }
        if(cs[7] <= cs[4]) {
          if(cs[4] <= cs[5]) {
            if(cs[5] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                 return true;
               }
             }
           }
         }
        if(cs[7] <= cs[5]) {
          if(cs[5] <= cs[4]) {
            if(cs[4] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                 return true;
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[7]) {
      if(cs[7] <= cs[2]) {
        if(cs[2] <= cs[6]) {
          if(cs[6] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                 return true;
               }
             }
           }
         }
       }
      if(cs[7] <= cs[3]) {
        if(cs[3] <= cs[6]) {
          if(cs[6] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                 return true;
               }
             }
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                 return true;
               }
             }
           }
         }
       }
      if(cs[7] <= cs[6]) {
        if(cs[6] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                 return true;
               }
             }
           }
         }
        if(cs[6] <= cs[3]) {
          if(cs[3] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                 return true;
               }
             }
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                 return true;
               }
             }
           }
         }
        if(cs[6] <= cs[4]) {
          if(cs[4] <= cs[2]) {
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[3]) {
                 return true;
               }
             }
           }
          if(cs[4] <= cs[5]) {
            if(cs[5] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                 return true;
               }
             }
           }
         }
       }
     }
   }

  return false;
}

bool check5(Int* cs) {
  if(cs[0] <= cs[1]) {
    if(cs[1] <= cs[3]) {
      if(cs[3] <= cs[2]) {
        if(cs[2] <= cs[5]) {
          if(cs[5] <= cs[4]) {
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[8]) {
              if(cs[8] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[7]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[9]) {
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[2] <= cs[6]) {
          if(cs[6] <= cs[4]) {
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[6] <= cs[7]) {
            if(cs[7] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[8]) {
                  if(cs[8] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[5]) {
                if(cs[5] <= cs[8]) {
                  if(cs[8] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[8] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[2] <= cs[7]) {
          if(cs[7] <= cs[6]) {
            if(cs[6] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[6] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[6] <= cs[9]) {
              if(cs[9] <= cs[5]) {
                if(cs[5] <= cs[8]) {
                  if(cs[8] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[2] <= cs[8]) {
          if(cs[8] <= cs[4]) {
            if(cs[4] <= cs[9]) {
              if(cs[9] <= cs[5]) {
                if(cs[5] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[5]) {
            if(cs[5] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[6]) {
            if(cs[6] <= cs[9]) {
              if(cs[9] <= cs[7]) {
                if(cs[7] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[9]) {
            if(cs[9] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[6]) {
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[2] <= cs[9]) {
          if(cs[9] <= cs[4]) {
            if(cs[4] <= cs[8]) {
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[5]) {
            if(cs[5] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[8]) {
            if(cs[8] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[6]) {
              if(cs[6] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[4]) {
      if(cs[4] <= cs[2]) {
        if(cs[2] <= cs[5]) {
          if(cs[5] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[7]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[4] <= cs[5]) {
        if(cs[5] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[7]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[5] <= cs[3]) {
          if(cs[3] <= cs[2]) {
            if(cs[2] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[8]) {
              if(cs[8] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[7]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[9]) {
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[5] <= cs[7]) {
          if(cs[7] <= cs[2]) {
            if(cs[2] <= cs[6]) {
              if(cs[6] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[7] <= cs[3]) {
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[7] <= cs[6]) {
            if(cs[6] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[6] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[6] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[8]) {
                  if(cs[8] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[3]) {
                if(cs[3] <= cs[8]) {
                  if(cs[8] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[8] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[5] <= cs[8]) {
          if(cs[8] <= cs[2]) {
            if(cs[2] <= cs[9]) {
              if(cs[9] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[3]) {
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[6]) {
            if(cs[6] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[3]) {
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[7]) {
                if(cs[7] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[7] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[9]) {
            if(cs[9] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[3]) {
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[7] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[6] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[5] <= cs[9]) {
          if(cs[9] <= cs[2]) {
            if(cs[2] <= cs[8]) {
              if(cs[8] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[3]) {
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[8]) {
            if(cs[8] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[3]) {
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[7] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[5]) {
      if(cs[5] <= cs[4]) {
        if(cs[4] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[6]) {
                if(cs[6] <= cs[9]) {
                  if(cs[9] <= cs[7]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[4] <= cs[6]) {
          if(cs[6] <= cs[2]) {
            if(cs[2] <= cs[7]) {
              if(cs[7] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[6] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[6] <= cs[7]) {
            if(cs[7] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[8]) {
                  if(cs[8] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[3]) {
                if(cs[3] <= cs[8]) {
                  if(cs[8] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[8] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[4] <= cs[7]) {
          if(cs[7] <= cs[3]) {
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[7] <= cs[6]) {
            if(cs[6] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[6] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[6] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[8]) {
                  if(cs[8] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[4] <= cs[8]) {
          if(cs[8] <= cs[2]) {
            if(cs[2] <= cs[9]) {
              if(cs[9] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[3]) {
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[6]) {
            if(cs[6] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[7]) {
                if(cs[7] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[9]) {
            if(cs[9] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[7]) {
              if(cs[7] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[4] <= cs[9]) {
          if(cs[9] <= cs[2]) {
            if(cs[2] <= cs[8]) {
              if(cs[8] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[3]) {
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[8]) {
            if(cs[8] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[6]) {
              if(cs[6] <= cs[3]) {
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[6]) {
      if(cs[6] <= cs[2]) {
        if(cs[2] <= cs[7]) {
          if(cs[7] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[8]) {
                  if(cs[8] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[6] <= cs[3]) {
        if(cs[3] <= cs[7]) {
          if(cs[7] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[9]) {
              if(cs[9] <= cs[5]) {
                if(cs[5] <= cs[8]) {
                  if(cs[8] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[6] <= cs[4]) {
        if(cs[4] <= cs[7]) {
          if(cs[7] <= cs[5]) {
            if(cs[5] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[8]) {
                  if(cs[8] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[6] <= cs[7]) {
        if(cs[7] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[8]) {
                  if(cs[8] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[7] <= cs[3]) {
          if(cs[3] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[9]) {
              if(cs[9] <= cs[5]) {
                if(cs[5] <= cs[8]) {
                  if(cs[8] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[7] <= cs[4]) {
          if(cs[4] <= cs[5]) {
            if(cs[5] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[8]) {
                  if(cs[8] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[7] <= cs[5]) {
          if(cs[5] <= cs[4]) {
            if(cs[4] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[9]) {
              if(cs[9] <= cs[3]) {
                if(cs[3] <= cs[8]) {
                  if(cs[8] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[7] <= cs[9]) {
          if(cs[9] <= cs[2]) {
            if(cs[2] <= cs[8]) {
              if(cs[8] <= cs[3]) {
                if(cs[3] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[3]) {
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[4]) {
            if(cs[4] <= cs[8]) {
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[5]) {
            if(cs[5] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[8]) {
            if(cs[8] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[7]) {
      if(cs[7] <= cs[2]) {
        if(cs[2] <= cs[6]) {
          if(cs[6] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[8]) {
                  if(cs[8] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[7] <= cs[3]) {
        if(cs[3] <= cs[6]) {
          if(cs[6] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[8]) {
                  if(cs[8] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[5]) {
                if(cs[5] <= cs[8]) {
                  if(cs[8] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[8] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[7] <= cs[6]) {
        if(cs[6] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[8]) {
                  if(cs[8] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[6] <= cs[3]) {
          if(cs[3] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[8]) {
                  if(cs[8] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[5]) {
                if(cs[5] <= cs[8]) {
                  if(cs[8] <= cs[4]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[8] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[6] <= cs[4]) {
          if(cs[4] <= cs[2]) {
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[4] <= cs[5]) {
            if(cs[5] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[8]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[9]) {
                  if(cs[9] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[3]) {
                if(cs[3] <= cs[9]) {
                  if(cs[9] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[9]) {
                if(cs[9] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[9] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[9]) {
              if(cs[9] <= cs[3]) {
                if(cs[3] <= cs[8]) {
                  if(cs[8] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[9] <= cs[8]) {
                if(cs[8] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[6] <= cs[8]) {
          if(cs[8] <= cs[2]) {
            if(cs[2] <= cs[9]) {
              if(cs[9] <= cs[3]) {
                if(cs[3] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[3]) {
            if(cs[3] <= cs[9]) {
              if(cs[9] <= cs[2]) {
                if(cs[2] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[4]) {
            if(cs[4] <= cs[9]) {
              if(cs[9] <= cs[5]) {
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[5]) {
            if(cs[5] <= cs[9]) {
              if(cs[9] <= cs[4]) {
                if(cs[4] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[9]) {
            if(cs[9] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[9] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[6] <= cs[9]) {
          if(cs[9] <= cs[3]) {
            if(cs[3] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[4]) {
            if(cs[4] <= cs[8]) {
              if(cs[8] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[8] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[5]) {
            if(cs[5] <= cs[8]) {
              if(cs[8] <= cs[4]) {
                if(cs[4] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[8]) {
            if(cs[8] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[4]) {
              if(cs[4] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[8] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[8]) {
      if(cs[8] <= cs[2]) {
        if(cs[2] <= cs[9]) {
          if(cs[9] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[7] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[8] <= cs[3]) {
        if(cs[3] <= cs[9]) {
          if(cs[9] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[6]) {
              if(cs[6] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[8] <= cs[4]) {
        if(cs[4] <= cs[9]) {
          if(cs[9] <= cs[2]) {
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[5]) {
            if(cs[5] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[7]) {
              if(cs[7] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[8] <= cs[5]) {
        if(cs[5] <= cs[9]) {
          if(cs[9] <= cs[4]) {
            if(cs[4] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[6]) {
              if(cs[6] <= cs[3]) {
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[6] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[8] <= cs[6]) {
        if(cs[6] <= cs[9]) {
          if(cs[9] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[4]) {
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[9] <= cs[7]) {
            if(cs[7] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[4]) {
              if(cs[4] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[8] <= cs[9]) {
        if(cs[9] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[7] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[9] <= cs[3]) {
          if(cs[3] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[6]) {
              if(cs[6] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[9] <= cs[4]) {
          if(cs[4] <= cs[2]) {
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[4] <= cs[5]) {
            if(cs[5] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[7]) {
              if(cs[7] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[9] <= cs[5]) {
          if(cs[5] <= cs[4]) {
            if(cs[4] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[6]) {
              if(cs[6] <= cs[3]) {
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[2]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[6] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[9] <= cs[6]) {
          if(cs[6] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[6] <= cs[4]) {
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[6] <= cs[7]) {
            if(cs[7] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[4]) {
              if(cs[4] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
                if(cs[5] <= cs[3]) {
                  if(cs[3] <= cs[2]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[9] <= cs[7]) {
          if(cs[7] <= cs[2]) {
            if(cs[2] <= cs[6]) {
              if(cs[6] <= cs[3]) {
                if(cs[3] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[7] <= cs[3]) {
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                if(cs[2] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[7] <= cs[6]) {
            if(cs[6] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[6] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[6] <= cs[4]) {
              if(cs[4] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
     }
    if(cs[1] <= cs[9]) {
      if(cs[9] <= cs[2]) {
        if(cs[2] <= cs[8]) {
          if(cs[8] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[7] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[9] <= cs[3]) {
        if(cs[3] <= cs[8]) {
          if(cs[8] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[6]) {
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[9] <= cs[4]) {
        if(cs[4] <= cs[8]) {
          if(cs[8] <= cs[2]) {
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[8] <= cs[5]) {
            if(cs[5] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[9] <= cs[5]) {
        if(cs[5] <= cs[8]) {
          if(cs[8] <= cs[4]) {
            if(cs[4] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
      if(cs[9] <= cs[8]) {
        if(cs[8] <= cs[2]) {
          if(cs[2] <= cs[3]) {
            if(cs[3] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[6]) {
              if(cs[6] <= cs[4]) {
                if(cs[4] <= cs[7]) {
                  if(cs[7] <= cs[5]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[7] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[8] <= cs[3]) {
          if(cs[3] <= cs[2]) {
            if(cs[2] <= cs[4]) {
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[4]) {
                if(cs[4] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[6]) {
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[2] <= cs[7]) {
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[8] <= cs[4]) {
          if(cs[4] <= cs[2]) {
            if(cs[2] <= cs[5]) {
              if(cs[5] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[4] <= cs[5]) {
            if(cs[5] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[5] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[8] <= cs[5]) {
          if(cs[5] <= cs[4]) {
            if(cs[4] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[6]) {
                  if(cs[6] <= cs[7]) {
                     return true;
                   }
                 }
                if(cs[3] <= cs[7]) {
                  if(cs[7] <= cs[6]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[6]) {
              if(cs[6] <= cs[2]) {
                if(cs[2] <= cs[7]) {
                  if(cs[7] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[6] <= cs[7]) {
                if(cs[7] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[6]) {
                  if(cs[6] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[6]) {
                if(cs[6] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
        if(cs[8] <= cs[6]) {
          if(cs[6] <= cs[2]) {
            if(cs[2] <= cs[7]) {
              if(cs[7] <= cs[3]) {
                if(cs[3] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[6] <= cs[3]) {
            if(cs[3] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[6] <= cs[4]) {
            if(cs[4] <= cs[7]) {
              if(cs[7] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[7] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
          if(cs[6] <= cs[7]) {
            if(cs[7] <= cs[2]) {
              if(cs[2] <= cs[3]) {
                if(cs[3] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[3]) {
              if(cs[3] <= cs[2]) {
                if(cs[2] <= cs[4]) {
                  if(cs[4] <= cs[5]) {
                     return true;
                   }
                 }
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[4]) {
                     return true;
                   }
                 }
               }
             }
            if(cs[7] <= cs[4]) {
              if(cs[4] <= cs[2]) {
                if(cs[2] <= cs[5]) {
                  if(cs[5] <= cs[3]) {
                     return true;
                   }
                 }
               }
              if(cs[4] <= cs[5]) {
                if(cs[5] <= cs[2]) {
                  if(cs[2] <= cs[3]) {
                     return true;
                   }
                 }
               }
             }
           }
         }
       }
     }
   }

  return false;
}