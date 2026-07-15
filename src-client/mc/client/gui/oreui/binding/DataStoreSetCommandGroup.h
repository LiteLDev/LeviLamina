#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
namespace Bedrock::DDUI { class DataStoreSyncClient; }
namespace GameplayUI { class DataDrivenScreenAPI; }
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
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>>
                                                                 mCloseButtonPress;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                    mPacketSender;
    ::ll::TypedStorage<8, 8, ::GameplayUI::DataDrivenScreenAPI*> mDataDrivenScreenAPI;
    // NOLINTEND
};

} // namespace OreUI
