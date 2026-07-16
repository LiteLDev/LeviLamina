#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
// clang-format on

namespace ScriptDebuggerMessages {

struct DebuggeeResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk88bbff;
    ::ll::UntypedStorage<4, 4>  mUnk5c92d4;
    ::ll::UntypedStorage<1, 1>  mUnkeda63a;
    ::ll::UntypedStorage<8, 32> mUnk20fbb3;
    ::ll::UntypedStorage<8, 80> mUnk7ab5fc;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggeeResponse& operator=(DebuggeeResponse const&);
    DebuggeeResponse(DebuggeeResponse const&);
    DebuggeeResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggeeResponse(
        int                                     requestSeq,
        bool                                    success,
        ::std::string_view                      responseMessage,
        ::std::optional<::cereal::DynamicValue> args
    );

    MCNAPI ~DebuggeeResponse();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        int                                     requestSeq,
        bool                                    success,
        ::std::string_view                      responseMessage,
        ::std::optional<::cereal::DynamicValue> args
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
