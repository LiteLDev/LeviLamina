#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct TintColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRColor;
    ::ll::TypedStorage<8, 32, ::std::string> mGColor;
    ::ll::TypedStorage<8, 32, ::std::string> mBColor;
    ::ll::TypedStorage<8, 32, ::std::string> mAColor;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TintColor();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI TintColor(::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor const&);

    MCNAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor&
    operator=(::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor&&);

    MCNAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor&
    operator=(::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor const&) const;

    MCNAPI ~TintColor();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::PersonaPieceMetaDef
