#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/LogLevel.h"

namespace Bedrock {

struct CallStack {
public:
    // CallStack inner types declare
    // clang-format off
    struct Context;
    struct Frame;
    struct FrameWithContext;
    // clang-format on
    
    // CallStack inner types define
    struct Frame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> mFilenameHash;
        ::ll::TypedStorage<8, 16, ::std::string_view> mFilename;
        ::ll::TypedStorage<4, 4, uint> mLine;
        // NOLINTEND
    
    };
    
    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mValue;
        ::ll::TypedStorage<1, 3, ::std::optional<::Bedrock::LogLevel>> mLogLevel;
        ::ll::TypedStorage<4, 8, ::std::optional<::LogAreaID>> mLogArea;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Context& operator=(Context const&);
        Context(Context const&);
        Context();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Context(::Bedrock::CallStack::Context&&);
    
        MCNAPI ~Context();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Bedrock::CallStack::Context&&);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    struct FrameWithContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::Bedrock::CallStack::Frame> mFrame;
        ::ll::TypedStorage<8, 56, ::std::optional<::Bedrock::CallStack::Context>> mContext;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        FrameWithContext();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FrameWithContext(::Bedrock::CallStack::Frame&& frame, ::std::optional<::Bedrock::CallStack::Context>&& context);
    
        MCAPI ~FrameWithContext();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Bedrock::CallStack::Frame&& frame, ::std::optional<::Bedrock::CallStack::Context>&& context);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::CallStack::FrameWithContext>> mFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    CallStack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CallStack(::Bedrock::CallStack::FrameWithContext&& frame);

    MCAPI ~CallStack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&& frame);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
