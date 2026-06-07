#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WorldClockRegistry;
// clang-format on

class Timeline {
public:
    // Timeline inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // Timeline inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 184> mUnka6e78c;
        ::ll::UntypedStorage<8, 24>  mUnkb14de8;
        ::ll::UntypedStorage<8, 24>  mUnk1cd7e7;
        ::ll::UntypedStorage<8, 24>  mUnk1212ce;
        ::ll::UntypedStorage<4, 8>   mUnkdf3ff0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd68029;
    ::ll::UntypedStorage<8, 32> mUnk3ce626;
    ::ll::UntypedStorage<8, 48> mUnk76ae8d;
    ::ll::UntypedStorage<4, 4>  mUnk55c571;
    ::ll::UntypedStorage<8, 24> mUnka5ceb3;
    ::ll::UntypedStorage<8, 24> mUnkacfbf6;
    ::ll::UntypedStorage<8, 24> mUnk9b6f6f;
    ::ll::UntypedStorage<4, 4>  mUnk73618b;
    ::ll::UntypedStorage<4, 4>  mUnk71af33;
    // NOLINTEND

public:
    // prevent constructor by default
    Timeline& operator=(Timeline const&);
    Timeline(Timeline const&);
    Timeline();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Timeline() = default;

    virtual int _getCurrentTickTime(::WorldClockRegistry const&) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
