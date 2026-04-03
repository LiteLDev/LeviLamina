#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct AdminLog; }
// clang-format on

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
    // NOLINTEND

public:
    // prevent constructor by default
    AdminLogData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AdminLogData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AdminLogData(::Realms::AdminLog const& adminLog);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Realms::AdminLog const& adminLog);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
