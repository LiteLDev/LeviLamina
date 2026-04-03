#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { class DataStoreSyncClient; }
// clang-format on

namespace OreUI {

class DataStoreSetCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::DataStoreSetCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::DDUI::DataStoreSyncClient*> mDataStore;
    ::ll::TypedStorage<
        8,
        136,
        ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, ::std::string>>
        mSetString;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, double>>
        mSetNumber;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, bool>>
        mSetBool;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>>
        mButtonPress;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreSetCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreSetCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DataStoreSetCommandGroup(::Bedrock::DDUI::DataStoreSyncClient* dataStore);

    MCAPI void buttonPress(::std::string dataStore, ::std::string property, ::std::string path);

    MCAPI void setBool(::std::string dataStoreName, ::std::string property, ::std::string path, bool data);

    MCAPI void setNumber(::std::string dataStoreName, ::std::string property, ::std::string path, double data);

    MCAPI void setString(::std::string dataStoreName, ::std::string property, ::std::string path, ::std::string data);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::DDUI::DataStoreSyncClient* dataStore);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
