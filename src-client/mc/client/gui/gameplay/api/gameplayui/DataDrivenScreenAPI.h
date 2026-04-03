#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/DataDrivenScreenInfo.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace GameplayUI {

class DataDrivenScreenAPI {
public:
    // DataDrivenScreenAPI inner types define
    using ShowDataDrivenScreenCallbackSignature =
        void(::std::optional<::std::string> const, ::std::optional<uint> const);

    using ShowDataDrivenScreenCallback = ::std::function<void(::std::optional<::std::string>, ::std::optional<uint>)>;

    using ScreenClosedCallbackSignature = void(uint, ::DataDrivenScreenClosedReason);

    using ScreenClosedCallback = ::std::function<void(uint, ::DataDrivenScreenClosedReason)>;

    using PacketSenderGetter = ::std::function<::PacketSender&()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<
            void(::std::optional<::std::string>, ::std::optional<uint>),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>
                                                                                   mShowDataDrivenScreenPublisher;
    ::ll::TypedStorage<8, 56, ::std::optional<::GameplayUI::DataDrivenScreenInfo>> mCurrentScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::PacketSender&()>>                  mPacketSenderGetter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void sendClosedPacket(uint formId, ::DataDrivenScreenClosedReason closeReason);

    MCAPI void showDataDrivenScreen(::std::string const& screenId, uint formId, ::std::optional<uint> dataInstanceId);
    // NOLINTEND
};

} // namespace GameplayUI
