/**
 * @file  TextFilteringProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TextFilteringProcessor.
 *
 */
class TextFilteringProcessor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTFILTERINGPROCESSOR
public:
    class TextFilteringProcessor& operator=(class TextFilteringProcessor const &) = delete;
    TextFilteringProcessor(class TextFilteringProcessor const &) = delete;
    TextFilteringProcessor() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?processAnonymousMessages\@CommunitySiftProcessor\@\@UEAA?AVCallbackToken\@\@PEAVIMinecraftEventing\@\@W4TextProcessingEventOrigin\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$function\@$$A6AXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@2\@\@Z\@6\@\@Z
     */
    virtual class CallbackToken processAnonymousMessages(class IMinecraftEventing *, enum class TextProcessingEventOrigin, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<enum class Safety::TextFilteringEvent> const &)>) = 0;
    /**
     * @vftbl 2
     * @symbol ?processMessages\@CommunitySiftProcessor\@\@UEAA?AVCallbackToken\@\@AEBVPlayer\@\@W4TextProcessingEventOrigin\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$function\@$$A6AXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@2\@\@Z\@6\@\@Z
     */
    virtual class CallbackToken processMessages(class Player const &, enum class TextProcessingEventOrigin, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<enum class Safety::TextFilteringEvent> const &)>) = 0;
    /**
     * @vftbl 3
     * @symbol ?processAnonymousNonChatText\@CommunitySiftProcessor\@\@UEAA?AVCallbackToken\@\@PEAVIMinecraftEventing\@\@W4TextProcessingEventOrigin\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$function\@$$A6AXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@2\@\@Z\@6\@\@Z
     */
    virtual class CallbackToken processAnonymousNonChatText(class IMinecraftEventing *, enum class TextProcessingEventOrigin, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<enum class Safety::TextFilteringEvent> const &)>) = 0;
    /**
     * @vftbl 4
     * @symbol ?processNonChatText\@CommunitySiftProcessor\@\@UEAA?AVCallbackToken\@\@AEBVPlayer\@\@W4TextProcessingEventOrigin\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$function\@$$A6AXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@2\@\@Z\@6\@\@Z
     */
    virtual class CallbackToken processNonChatText(class Player const &, enum class TextProcessingEventOrigin, std::vector<std::string> const &, class std::function<void (std::vector<std::string> const &, std::vector<enum class Safety::TextFilteringEvent> const &)>) = 0;
    /**
     * @vftbl 5
     * @symbol ?processJoinEvent\@CommunitySiftProcessor\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    virtual void processJoinEvent(class Player const &) = 0;
    /**
     * @vftbl 6
     * @symbol ?processLeaveEvent\@CommunitySiftProcessor\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    virtual void processLeaveEvent(class Player const &) = 0;
    /**
     * @vftbl 7
     * @symbol ?onStartShutdown\@CommunitySiftProcessor\@\@UEAAXXZ
     */
    virtual void onStartShutdown() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTFILTERINGPROCESSOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TextFilteringProcessor();
#endif

};
