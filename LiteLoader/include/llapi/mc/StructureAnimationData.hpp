/**
 * @file  StructureAnimationData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureAnimationData.
 *
 */
class StructureAnimationData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREANIMATIONDATA
public:
    class StructureAnimationData& operator=(class StructureAnimationData const &) = delete;
    StructureAnimationData(class StructureAnimationData const &) = delete;
    StructureAnimationData() = delete;
#endif

public:
    /**
     * @symbol ??0StructureAnimationData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureAnimationData(class StructureAnimationData &&);
    /**
     * @symbol ??0StructureAnimationData\@\@QEAA\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@AEBVStructureSettings\@\@EAEBVBlockPos\@\@\@Z
     */
    MCAPI StructureAnimationData(std::unique_ptr<class CommandArea>, unsigned __int64, std::string const &, class StructureSettings const &, unsigned char, class BlockPos const &);
    /**
     * @symbol ?getPosition\@StructureAnimationData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @symbol ?getStructureName\@StructureAnimationData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getStructureName() const;
    /**
     * @symbol ?getStructureSettings\@StructureAnimationData\@\@QEBAAEBVStructureSettings\@\@XZ
     */
    MCAPI class StructureSettings const & getStructureSettings() const;
    /**
     * @symbol ?serialize\@StructureAnimationData\@\@QEAAAEAVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI class CompoundTag & serialize(class CompoundTag &);
    /**
     * @symbol ?setCmdArea\@StructureAnimationData\@\@QEAAXV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea>);
    /**
     * @symbol ??1StructureAnimationData\@\@QEAA\@XZ
     */
    MCAPI ~StructureAnimationData();
    /**
     * @symbol ?load\@StructureAnimationData\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class StructureAnimationData load(std::string const &, class CompoundTag const &);

};
