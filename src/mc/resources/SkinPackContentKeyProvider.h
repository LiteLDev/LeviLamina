#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentKeyProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class SkinPackContentKeyProvider : public ::IContentKeyProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getContentKey(::ContentIdentity const&) const /*override*/;

    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) /*override*/;

    virtual void clearTempContentKeys() /*override*/;

    virtual ~SkinPackContentKeyProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string $getContentKey(::ContentIdentity const&) const;

    MCNAPI void $setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&);

    MCNAPI void $clearTempContentKeys();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
