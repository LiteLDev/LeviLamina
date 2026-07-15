#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
// clang-format on

class Timeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd68029;
    ::ll::UntypedStorage<8, 32> mUnk3ce626;
    ::ll::UntypedStorage<8, 24> mUnk53c1cb;
    ::ll::UntypedStorage<4, 4>  mUnk55c571;
    ::ll::UntypedStorage<8, 24> mUnka5ceb3;
    ::ll::UntypedStorage<8, 24> mUnkacfbf6;
    ::ll::UntypedStorage<8, 24> mUnk9b6f6f;
    ::ll::UntypedStorage<8, 16> mUnk930d31;
    ::ll::UntypedStorage<8, 32> mUnk1fd04e;
    ::ll::UntypedStorage<4, 4>  mUnkf66ca5;
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

    virtual void tick(::PacketSender&);

    virtual void _initialize();

    virtual void _phaseChangedWithoutTransition(::std::string const&, ::std::string const&);

    virtual void _phaseTransitionStarted(::std::string const&, ::std::string const&, int, int);

    virtual void _phaseTransitionEnded(::std::string const&, ::std::string const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
