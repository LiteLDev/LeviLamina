/**
 * @file  TextFilteringUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TextFilteringUtils.
 *
 */
class TextFilteringUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTFILTERINGUTILS
public:
    class TextFilteringUtils& operator=(class TextFilteringUtils const &) = delete;
    TextFilteringUtils(class TextFilteringUtils const &) = delete;
    TextFilteringUtils() = delete;
#endif

public:
    /**
     * @symbol ?checkChatFilteringEventsAndSendToastIfClientWasMuted\@TextFilteringUtils\@\@SAXAEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@std\@\@V?$not_null\@PEAVPacketSender\@\@\@gsl\@\@AEBVNetworkIdentifier\@\@AEBW4SubClientId\@\@\@Z
     */
    MCAPI static void checkChatFilteringEventsAndSendToastIfClientWasMuted(std::vector<enum class Safety::TextFilteringEvent> const &, class gsl::not_null<class PacketSender *>, class NetworkIdentifier const &, enum class SubClientId const &);
    /**
     * @symbol ?checkChatFilteringEventsForFlooding\@TextFilteringUtils\@\@SA_NAEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool checkChatFilteringEventsForFlooding(std::vector<enum class Safety::TextFilteringEvent> const &);

};
