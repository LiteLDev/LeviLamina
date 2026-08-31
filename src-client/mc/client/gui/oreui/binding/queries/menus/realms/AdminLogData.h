#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

namespace OreUI {

class AdminLogData : public ::OreUI::PropertyObject<::OreUI::AdminLogData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mLogType;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDatePosted;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTimePosted;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mParameters;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mKeys;
    // NOLINTEND
};

} // namespace OreUI
