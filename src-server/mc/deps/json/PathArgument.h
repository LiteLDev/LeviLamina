#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class PathArgument {
public:
    // PathArgument inner types define
    enum class Kind : int {
        KindNone = 0,
        KindIndex = 1,
        KindKey = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> key_;
    ::ll::TypedStorage<4, 4, uint> index_;
    ::ll::TypedStorage<4, 4, ::Json::PathArgument::Kind> kind_;
    // NOLINTEND

};

}
