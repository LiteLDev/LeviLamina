#include "Difficulty.h"
#include "GameType.h"

class LevelSettings {
public:
    unsigned int seed;
    GameType     gameType;
    Difficulty   difficulty;
};