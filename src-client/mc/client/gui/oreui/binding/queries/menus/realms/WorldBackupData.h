#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

namespace OreUI {

class WorldBackupData : public ::OreUI::PropertyObject<::OreUI::WorldBackupData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>       mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>       mWorldName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>       mBackupName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64, int64>>                       mEpochTime;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>       mDatePosted;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>       mTimePosted;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64, int64>>                       mUncompressedSizeBytes;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64, int64>>                       mCompressedSizeBytes;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>       mGameServerVersion;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::std::string, ::std::string>> mEnabledBehaviorPacks;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::std::string, ::std::string>> mEnabledResourcePacks;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                         mIsHardcore;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int, int>>                           mGameMode;
    // NOLINTEND
};

} // namespace OreUI
