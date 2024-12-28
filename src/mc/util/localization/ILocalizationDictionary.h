#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ILocalizationDictionary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb4c555;
    ::ll::UntypedStorage<8, 8>  mUnkb9ff6d;
    ::ll::UntypedStorage<8, 32> mUnk9f708b;
    // NOLINTEND

public:
    // prevent constructor by default
    ILocalizationDictionary& operator=(ILocalizationDictionary const&);
    ILocalizationDictionary(ILocalizationDictionary const&);
    ILocalizationDictionary();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILocalizationDictionary();

    // vIndex: 1
    virtual ::std::string getLocString(::std::string const&) const = 0;

    // vIndex: 2
    virtual bool isLocalizationReady() const = 0;

    // vIndex: 3
    virtual void _updateLoc() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
