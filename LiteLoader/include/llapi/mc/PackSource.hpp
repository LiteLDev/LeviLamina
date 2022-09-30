/**
 * @file  PackSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackSource.
 *
 */
class PackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCE
public:
    class PackSource& operator=(class PackSource const &) = delete;
    PackSource(class PackSource const &) = delete;
    PackSource() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSOURCE
    /**
     * @hash   -315241134
     * @symbol ?getPackOrigin@PackSource@@UEBA?AW4PackOrigin@@XZ
     */
    MCVAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @hash   1522874258
     * @symbol ?getPackType@PackSource@@UEBA?AW4PackType@@XZ
     */
    MCVAPI enum class PackType getPackType() const;
    /**
     * @hash   -1033336940
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PackSource();
#endif
    /**
     * @hash   -689320614
     * @symbol ?fetchPack@PackSource@@QEAAPEAVPack@@AEBUPackIdVersion@@@Z
     */
    MCAPI class Pack * fetchPack(struct PackIdVersion const &);
    /**
     * @hash   1570873997
     * @symbol ?resolveUpgradeDependencies@PackSource@@QEAAXAEAVPack@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     */
    MCAPI void resolveUpgradeDependencies(class Pack &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);

};