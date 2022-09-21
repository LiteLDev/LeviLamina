/**
 * @file  MC/NBStartPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NBBridgeCrossing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBStartPiece.
 *
 */
class NBStartPiece : public NBBridgeCrossing {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBSTARTPIECE
public:
    class NBStartPiece& operator=(class NBStartPiece const &) = delete;
    NBStartPiece(class NBStartPiece const &) = delete;
    NBStartPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NBStartPiece();
    /**
     * @hash   -588333973
     * @vftbl  2
     * @symbol ?getType@NBStartPiece@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   609240173
     * @symbol ??0NBStartPiece@@QEAA@AEAVRandom@@HH@Z
     */
    MCAPI NBStartPiece(class Random &, int, int);

};