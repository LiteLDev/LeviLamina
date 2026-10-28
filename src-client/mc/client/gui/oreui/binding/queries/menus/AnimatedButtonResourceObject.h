#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

struct AnimatedButtonResourceObject : public ::OreUI::PropertyObject<::OreUI::AnimatedButtonResourceObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mUnfocusedBackgroundUrl;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mFocusedBackgroundUrl;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mUnfocusedForegroundUrl;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mFocusedForegroundUrl;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mUnfocusedTextColor;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mFocusedTextColor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    set(::std::string unfocusedBackgroundUrl,
        ::std::string focusedBackgroundUrl,
        ::std::string unfocusedForegroundUrl,
        ::std::string focusedForegroundUrl,
        ::std::string unfocusedTextColor,
        ::std::string focusedTextColor);
    // NOLINTEND
};

} // namespace OreUI
