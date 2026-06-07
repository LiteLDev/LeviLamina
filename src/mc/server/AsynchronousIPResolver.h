#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedAsync.h"

class AsynchronousIPResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka91997;
    ::ll::UntypedStorage<8, 16> mUnk227489;
    ::ll::UntypedStorage<8, 16> mUnkbeda29;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AsynchronousIPResolver& operator=(AsynchronousIPResolver const&);
    AsynchronousIPResolver(AsynchronousIPResolver const&);
    AsynchronousIPResolver();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AsynchronousIPResolver(AsynchronousIPResolver const&);
    AsynchronousIPResolver();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsynchronousIPResolver(::std::string url);

    MCNAPI ::Bedrock::Threading::SharedAsync<::std::string> _resolve();

    MCNAPI void _resolveIfNeeded();

    MCNAPI ::std::string getIp() const;

    MCNAPI ::std::string const& getOriginalUrl() const;

    MCNAPI bool isDone() const;

#ifdef LL_PLAT_C
    MCNAPI ::AsynchronousIPResolver& operator=(::AsynchronousIPResolver const&);

    MCNAPI ~AsynchronousIPResolver();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string url);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
