#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk6b1700;
    ::ll::UntypedStorage<8, 56> mUnk8855bb;
    ::ll::UntypedStorage<8, 64> mUnk579ce5;
    ::ll::UntypedStorage<8, 72> mUnkef4346;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocument& operator=(ActorDocument const&);
    ActorDocument(ActorDocument const&);
    ActorDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDocument(::SharedTypes::Legacy::ActorDocument&&);

    MCNAPI ~ActorDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::ActorDocument&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
