#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class Pack;
class Skin;
// clang-format on

class SkinPack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Pack>>> mPack;
    ::ll::TypedStorage<8, 32, ::std::string>                              mName;
    ::ll::TypedStorage<8, 32, ::std::string>                              mLocName;
    ::ll::TypedStorage<8, 32, ::std::string>                              mSerializableName;
    ::ll::TypedStorage<8, 16, ::Json::Value>                              mGeometryData;
    ::ll::TypedStorage<1, 1, bool>                                        mRequireTrustedContent;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Skin>>>   mSkins;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addSkin(::Skin skin);

    MCNAPI void loadGeometry(::std::string const& content);

    MCNAPI void releaseGeometry();

    MCNAPI void setSkinAt(::Skin skin, int index);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getGeometryAsset(::Pack const& pack);
    // NOLINTEND
};
