#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ParticleSystem {

struct NodeParseData {
public:
    // NodeParseData inner types declare
    // clang-format off
    struct Node;
    // clang-format on

    // NodeParseData inner types define
    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mLeftValue;
        ::ll::TypedStorage<4, 4, float> mRightValue;
        ::ll::TypedStorage<4, 4, float> mLeftSlope;
        ::ll::TypedStorage<4, 4, float> mRightSlope;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::ParticleSystem::NodeParseData::Node>>> mNodeList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NodeParseData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
