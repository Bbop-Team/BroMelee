#include "perso_info.h"

// perso par default
const perso_info DEFAULT_PERSO = {
  "img/personnages/knight/",
  {10,10,12,3,3,4,6,1}, // stationnary|run|dash|jump|fall|light_attack|attack|hit
  {0.09,0.05,0.02,0.1,0.1,0.08,0.12,0.1}, // stationnary|run|dash|jump|fall|light_attack|attack|hit
  250.f,
  9.81f,
  100.f
};
