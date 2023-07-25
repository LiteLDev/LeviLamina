#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class SHLibrary : public ::StructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHLIBRARY
public:
    SHLibrary& operator=(SHLibrary const&) = delete;
    SHLibrary(SHLibrary const&)            = delete;
    SHLibrary()                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@SHLibrary\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@SHLibrary\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @symbol
     * ?createPiece\@SHLibrary\@\@SA?AV?$unique_ptr\@VStrongholdPiece\@\@U?$default_delete\@VStrongholdPiece\@\@\@std\@\@\@std\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI static std::unique_ptr<class StrongholdPiece>
    createPiece(std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int);
};
