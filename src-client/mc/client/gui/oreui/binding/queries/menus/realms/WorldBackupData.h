#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

namespace OreUI {

class WorldBackupData : public ::OreUI::PropertyObject<::OreUI::WorldBackupData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mWorldName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mBackupName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>         mEpochTime;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDatePosted;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTimePosted;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>         mUncompressedSizeBytes;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>         mCompressedSizeBytes;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGameServerVersion;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mEnabledBehaviorPacks;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
                                                        mEnabledResourcePacks;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>> mIsHardcore;
    // NOLINTEND
};

} // namespace OreUI
