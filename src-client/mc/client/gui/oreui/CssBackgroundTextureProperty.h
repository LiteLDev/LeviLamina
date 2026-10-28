#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/BaseCssProperty.h"
#include "mc/deps/shared_types/beta/data_drivenui/styling/BorderImageRepeatType.h"
#include "mc/deps/shared_types/util/FileReference.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Styling { struct CssParsingOptions; }
// clang-format on

namespace OreUI::Styling {

struct CssBackgroundTextureProperty : public ::OreUI::Styling::BaseCssProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::FileReference<21>>> mFilePath;
    ::ll::TypedStorage<4, 8, ::std::array<int, 2>>                               mBaseSize;
    ::ll::TypedStorage<4, 16, ::std::array<int, 4>>                              mNinesliceSize;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Beta::DataDrivenUI::Styling::BorderImageRepeatType>>
        mBorderImageRepeatTopBottom;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Beta::DataDrivenUI::Styling::BorderImageRepeatType>>
        mBorderImageRepeatRightLeft;
    // NOLINTEND

public:
    // prevent constructor by default
    CssBackgroundTextureProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string convertToCss(
        ::OreUI::Styling::CssParsingOptions const& options,
        ::std::unordered_set<::std::string>&       addedProperties
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CssBackgroundTextureProperty(
        ::std::string const&                               propertyName,
        ::std::optional<::SharedTypes::FileReference<21>>& filePath
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& propertyName, ::std::optional<::SharedTypes::FileReference<21>>& filePath);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $convertToCss(
        ::OreUI::Styling::CssParsingOptions const& options,
        ::std::unordered_set<::std::string>&       addedProperties
    );
    // NOLINTEND
};

} // namespace OreUI::Styling
