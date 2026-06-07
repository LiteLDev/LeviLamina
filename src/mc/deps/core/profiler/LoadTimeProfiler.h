#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Core {

class LoadTimeProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk69a966;
    ::ll::UntypedStorage<4, 4>   mUnkec42a1;
    ::ll::UntypedStorage<8, 24>  mUnk3beda8;
    ::ll::UntypedStorage<8, 296> mUnk58830a;
    ::ll::UntypedStorage<1, 1>   mUnka79572;
    ::ll::UntypedStorage<1, 1>   mUnkfa6b3f;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadTimeProfiler& operator=(LoadTimeProfiler const&);
    LoadTimeProfiler(LoadTimeProfiler const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoadTimeProfiler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoadTimeProfiler();

#ifdef LL_PLAT_C
    MCNAPI void endLogging();

    MCNAPI bool isLogging() const;
#endif

    MCNAPI void setEnabled(bool enabled);

#ifdef LL_PLAT_C
    MCNAPI void
    startLogging(::std::string_view loggingFolder, ::std::string_view fileName, ::std::string_view timeStamp);

    MCNAPI void update();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
