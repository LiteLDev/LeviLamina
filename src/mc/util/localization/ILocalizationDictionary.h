#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ILocalizationDictionary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb4c555;
    ::ll::UntypedStorage<8, 8>  mUnkb9ff6d;
    ::ll::UntypedStorage<8, 32> mUnkeb4635;
    // NOLINTEND

public:
    // prevent constructor by default
    ILocalizationDictionary& operator=(ILocalizationDictionary const&);
    ILocalizationDictionary(ILocalizationDictionary const&);
    ILocalizationDictionary();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ILocalizationDictionary() = default;
#else // LL_PLAT_C
    virtual ~ILocalizationDictionary();
#endif

    virtual ::std::string getLocString(::std::string const& locKey) const = 0;

    virtual bool isLocalizationReady() const = 0;

    virtual void _updateLoc() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool _updateLocPath(::Core::Path const& locFilePath);

    MCNAPI void updateLoc();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
