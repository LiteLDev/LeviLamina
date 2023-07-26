/**
 * @file  ResourceLocation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceLocation.
 *
 */
class ResourceLocation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOCATION
public:
    class ResourceLocation& operator=(class ResourceLocation const &) = delete;
    ResourceLocation(class ResourceLocation const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ResourceLocation\@\@QEAA\@XZ
     */
    MCAPI ResourceLocation();
    /**
     * @symbol  ??0ResourceLocation\@\@QEAA\@AEBVPath\@Core\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCAPI ResourceLocation(class Core::Path const &, enum class ResourceFileSystem);
    /**
     * @symbol  ??0ResourceLocation\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI ResourceLocation(class Core::Path const &);
    /**
     * @symbol  ?getFullPath\@ResourceLocation\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getFullPath() const;
    /**
     * @symbol  ?getRelativePath\@ResourceLocation\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const & getRelativePath() const;
    /**
     * @symbol  ??8ResourceLocation\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ResourceLocation const &) const;
    /**
     * @symbol  ?serialize\@ResourceLocation\@\@QEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value &) const;
    /**
     * @symbol  ?setRelativePath\@ResourceLocation\@\@QEAAXAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI void setRelativePath(class Core::PathBuffer<std::string> const &);
    /**
     * @symbol  ??1ResourceLocation\@\@QEAA\@XZ
     */
    MCAPI ~ResourceLocation();
    /**
     * @symbol  ?getEmptyLocation\@ResourceLocation\@\@SAAEBV1\@XZ
     */
    MCAPI static class ResourceLocation const & getEmptyLocation();

};