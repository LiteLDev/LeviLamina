#pragma once

#include "../Actor/Actor.h"
#include "../Math/BlockPos.h"
#include "../Math/Vec3.h"
#include "../dll.h"
#include <boost/format.hpp>
#include <string>
#include <vector>

class Player;

class CommandOutputParameter {
    std::string str;
    int         type;

public:
    MCAPI CommandOutputParameter(std::string const&);

    MCAPI CommandOutputParameter(BlockPos);
    MCAPI CommandOutputParameter(std::vector<std::string> const&);
    MCAPI CommandOutputParameter(std::vector<Player const*> const&);

    MCAPI CommandOutputParameter(std::string, int);
    MCAPI CommandOutputParameter(Actor const*);
    MCAPI CommandOutputParameter(Actor const&);

    MCAPI CommandOutputParameter(int);
    MCAPI CommandOutputParameter(char const*);
    MCAPI CommandOutputParameter(float);
    MCAPI CommandOutputParameter(bool);

    // MCAPI CommandOutputParameter(CommandSelectorResults<class Actor> const &);

    inline CommandOutputParameter(double val)
        : str(std::to_string(val))
        , type(0) {
    }
    inline CommandOutputParameter(int64_t val)
        : str(std::to_string(val))
        , type(0) {
    }
    inline CommandOutputParameter(uint64_t val)
        : str(std::to_string(val))
        , type(0) {
    }
    inline CommandOutputParameter(Vec3 val)
        : str((boost::format("%.2f, %.2f, %.2f") % val.x % val.y % val.z).str())
        , type(0) {
    }
};