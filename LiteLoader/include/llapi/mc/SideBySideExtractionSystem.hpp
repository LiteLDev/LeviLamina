/**
 * @file  SideBySideExtractionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SideBySide.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideExtractionSystem.
 *
 */
class SideBySideExtractionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEEXTRACTIONSYSTEM
public:
    class SideBySideExtractionSystem& operator=(class SideBySideExtractionSystem const &) = delete;
    SideBySideExtractionSystem(class SideBySideExtractionSystem const &) = delete;
    SideBySideExtractionSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SideBySideExtractionSystem();
    /**
     * @vftbl  1
     * @symbol  ?registerEvents\@SideBySideExtractionSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    /**
     * @symbol  ??0SideBySideExtractionSystem\@\@QEAA\@AEBV?$array\@V?$vector\@IV?$allocator\@I\@std\@\@\@std\@\@$0BI\@\@std\@\@\@Z
     */
    MCAPI SideBySideExtractionSystem(class std::array<std::vector<unsigned int>, 24> const &);
    /**
     * @symbol  ?_onSideBySideExtractionRequest\@SideBySideExtractionSystem\@\@SAXAEBUExtractMethods\@SideBySide\@\@AEBUOnExtractSideBySide\@\@\@Z
     */
    MCAPI static void _onSideBySideExtractionRequest(struct SideBySide::ExtractMethods const &, struct OnExtractSideBySide const &);
    /**
     * @symbol  ?onStoreSideBySideResult\@SideBySideExtractionSystem\@\@SAXAEBUOnStoreSideBySideResult\@\@\@Z
     */
    MCAPI static void onStoreSideBySideResult(struct OnStoreSideBySideResult const &);

};