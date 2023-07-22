/**
 * @file  LevelLooseFileStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelLooseFileStorage.
 *
 */
class LevelLooseFileStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELLOOSEFILESTORAGE
public:
    class LevelLooseFileStorage& operator=(class LevelLooseFileStorage const &) = delete;
    LevelLooseFileStorage(class LevelLooseFileStorage const &) = delete;
    LevelLooseFileStorage() = delete;
#endif

public:
    /**
     * @symbol  ??0LevelLooseFileStorage\@\@QEAA\@AEBVPath\@Core\@\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI LevelLooseFileStorage(class Core::Path const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @symbol  ?getAccessStrategy\@LevelLooseFileStorage\@\@QEBA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class PackAccessStrategy> getAccessStrategy() const;

};