#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class BasicSerializerContext {
public:
    // BasicSerializerContext inner types declare
    // clang-format off
    struct TokenHolder;
    struct Context;
    struct LogEntry;
    // clang-format on

    // BasicSerializerContext inner types define
    enum class ContextType : int {
        ArrayElem = 0,
        Member    = 1,
        Root      = 2,
    };

    struct TokenHolder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkb9a995;
        // NOLINTEND

    public:
        // prevent constructor by default
        TokenHolder& operator=(TokenHolder const&);
        TokenHolder(TokenHolder const&);
        TokenHolder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit operator ::std::string_view() const;
        // NOLINTEND
    };

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk8cd56c;
        ::ll::UntypedStorage<8, 16> mUnk597ab4;
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
        ::ll::UntypedStorage<8, 16> mUnkfc29ff;
        ::ll::UntypedStorage<4, 4>  mUnk47ae14;
        ::ll::UntypedStorage<8, 8>  mUnk1b2a23;
        ::ll::UntypedStorage<4, 4>  mUnk2bab13;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke38ce2;
    ::ll::UntypedStorage<8, 48> mUnk16c65c;
    ::ll::UntypedStorage<8, 64> mUnke42d72;
    ::ll::UntypedStorage<2, 2>  mUnkbb4d26;
    ::ll::UntypedStorage<1, 1>  mUnk10d234;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicSerializerContext& operator=(BasicSerializerContext const&);
    BasicSerializerContext(BasicSerializerContext const&);
    BasicSerializerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string _getContextString(uint index) const;

    MCNAPI ::std::vector<::cereal::BasicSerializerContext::Context>
    contextFor(::cereal::BasicSerializerContext::LogEntry const& entry) const;

    MCNAPI ::std::vector<::std::string> errors() const;

    MCNAPI ::cereal::BasicSerializerContext& operator=(::cereal::BasicSerializerContext&&);
    // NOLINTEND
};

} // namespace cereal
