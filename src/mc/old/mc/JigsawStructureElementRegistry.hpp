/**
 * @file  JigsawStructureElementRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawStructureElementRegistry.
 *
 */
class JigsawStructureElementRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREELEMENTREGISTRY
public:
    class JigsawStructureElementRegistry& operator=(class JigsawStructureElementRegistry const &) = delete;
    JigsawStructureElementRegistry(class JigsawStructureElementRegistry const &) = delete;
    JigsawStructureElementRegistry() = delete;
#endif

public:
    /**
     * @symbol  ?clear\@JigsawStructureElementRegistry\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?lookupByName\@JigsawStructureElementRegistry\@\@QEBAPEBVStructurePoolElement\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructurePoolElement const * lookupByName(std::string) const;
    /**
     * @symbol  ?registerStructureElement\@JigsawStructureElementRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$unique_ptr\@VStructurePoolElement\@\@U?$default_delete\@VStructurePoolElement\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void registerStructureElement(std::string, std::unique_ptr<class StructurePoolElement> &&);
    /**
     * @symbol  ??1JigsawStructureElementRegistry\@\@QEAA\@XZ
     */
    MCAPI ~JigsawStructureElementRegistry();

};