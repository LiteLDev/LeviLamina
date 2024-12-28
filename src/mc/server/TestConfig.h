#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class TestConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk688455;
    ::ll::UntypedStorage<4, 4>  mUnk5d82e6;
    ::ll::UntypedStorage<1, 1>  mUnk1524f2;
    ::ll::UntypedStorage<4, 4>  mUnkddc2c8;
    ::ll::UntypedStorage<8, 24> mUnke80acc;
    ::ll::UntypedStorage<4, 4>  mUnka31c3c;
    ::ll::UntypedStorage<1, 1>  mUnk9988fe;
    ::ll::UntypedStorage<1, 1>  mUnkce1c9d;
    ::ll::UntypedStorage<1, 1>  mUnk5a5683;
    ::ll::UntypedStorage<8, 32> mUnk2212f5;
    ::ll::UntypedStorage<8, 32> mUnkaed291;
    ::ll::UntypedStorage<1, 1>  mUnk36c632;
    ::ll::UntypedStorage<8, 8>  mUnkacecaa;
    // NOLINTEND

public:
    // prevent constructor by default
    TestConfig(TestConfig const&);
    TestConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TestConfig(::cereal::ReflectionCtx const& ctx, ::std::string const& fileName);

    MCAPI ::std::string _readFile(::std::string const& fileName) const;

    MCAPI ::cereal::ReflectionCtx const& context() const;

    MCAPI bool isLoaded() const;

    MCAPI ::TestConfig& operator=(::TestConfig const&);

    MCAPI ::TestConfig& operator=(::TestConfig&&);

    MCAPI void setLoaded();

    MCAPI ~TestConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::std::string const& fileName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
