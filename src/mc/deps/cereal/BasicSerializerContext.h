#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"

namespace cereal {

class BasicSerializerContext {
public:
    // BasicSerializerContext inner types declare
    // clang-format off
    struct Context;
    struct ContextStack;
    struct LogEntry;
    // clang-format on

    // BasicSerializerContext inner types define
    enum class ContextType : int {
        ArrayElem = 0,
        Member    = 1,
        Root      = 2,
    };

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk8cd56c;
        ::ll::UntypedStorage<8, 32> mUnk38876c;
        ::ll::UntypedStorage<4, 4>  mUnk6d1130;
        // NOLINTEND

    public:
        // prevent constructor by default
        Context& operator=(Context const&);
        Context(Context const&);
        Context();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Context();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2>  mUnk661e44;
        ::ll::UntypedStorage<8, 32> mUnk45999d;
        ::ll::UntypedStorage<4, 4>  mUnk47ae14;
        ::ll::UntypedStorage<8, 8>  mUnk1b2a23;
        // NOLINTEND

    public:
        // prevent constructor by default
        LogEntry& operator=(LogEntry const&);
        LogEntry(LogEntry const&);
        LogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ContextStack {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk3c1044;
        ::ll::UntypedStorage<8, 64> mUnka1cc7c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ContextStack& operator=(ContextStack const&);
        ContextStack(ContextStack const&);
        ContextStack();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka1cb6b;
    ::ll::UntypedStorage<8, 72> mUnke42d72;
    ::ll::UntypedStorage<2, 2>  mUnkbb4d26;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicSerializerContext& operator=(BasicSerializerContext const&);
    BasicSerializerContext(BasicSerializerContext const&);
    BasicSerializerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicSerializerContext(::cereal::ResultCode errorCodes);

    MCNAPI ::std::string _getContextString(uint index) const;

    MCNAPI ::std::vector<::cereal::BasicSerializerContext::Context>
    contextFor(::cereal::BasicSerializerContext::LogEntry const& entry) const;

    MCNAPI ::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string_view> currentContext() const;

    MCNAPI ::std::vector<::std::string> errors() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ResultCode errorCodes);
    // NOLINTEND
};

} // namespace cereal
