#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Safety { enum class TextFilteringEvent; }
// clang-format on

class TextFilteringUtils {

public:
    // prevent constructor by default
    TextFilteringUtils& operator=(TextFilteringUtils const&) = delete;
    TextFilteringUtils(TextFilteringUtils const&)            = delete;
    TextFilteringUtils()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?checkChatFilteringEventsAndSendToastIfClientWasMuted\@TextFilteringUtils\@\@SAXAEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@std\@\@V?$not_null\@PEAVPacketSender\@\@\@gsl\@\@AEBVNetworkIdentifier\@\@AEBW4SubClientId\@\@\@Z
     */
    MCAPI static void
    checkChatFilteringEventsAndSendToastIfClientWasMuted(std::vector<enum class Safety::TextFilteringEvent> const&, class gsl::not_null<class PacketSender*>, class NetworkIdentifier const&, enum class SubClientId const&);
    /**
     * @symbol
     * ?checkChatFilteringEventsForFlooding\@TextFilteringUtils\@\@SA_NAEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool checkChatFilteringEventsForFlooding(std::vector<enum class Safety::TextFilteringEvent> const&);
    // NOLINTEND
};
