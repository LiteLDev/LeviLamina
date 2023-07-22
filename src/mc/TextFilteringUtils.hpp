/**
 * @file  TextFilteringUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?checkChatFilteringEventsAndSendToastIfClientWasMuted\@TextFilteringUtils\@\@SAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$not_null\@PEAVPacketSender\@\@\@gsl\@\@AEBVNetworkIdentifier\@\@AEBW4SubClientId\@\@\@Z
     */
    MCAPI static void checkChatFilteringEventsAndSendToastIfClientWasMuted(std::vector<std::string> const &, class gsl::not_null<class PacketSender *>, class NetworkIdentifier const &, enum class SubClientId const &);

};