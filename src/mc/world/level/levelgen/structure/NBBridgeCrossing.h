#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"

class NBBridgeCrossing : public ::NetherFortressPiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBBRIDGECROSSING
public:
    NBBridgeCrossing& operator=(NBBridgeCrossing const&) = delete;
    NBBridgeCrossing(NBBridgeCrossing const&)            = delete;
    NBBridgeCrossing()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@NBBridgeCrossing\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 3
     * @symbol
     * ?addChildren\@NBBridgeCrossing\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /**
     * @vftbl 4
     * @symbol ?postProcess\@NBBridgeCrossing\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBBRIDGECROSSING
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NBBridgeCrossing();
#endif
};
