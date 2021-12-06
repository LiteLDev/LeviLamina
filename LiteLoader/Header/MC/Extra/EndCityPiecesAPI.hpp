//Extra Part For EndCityPieces.hpp
#ifdef EXTRA_INCLUDE_PART_ENDCITYPIECES
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class EndCityPiece {
public:
    EndCityPiece() = delete;
    EndCityPiece(EndCityPiece const&) = delete;
    EndCityPiece(EndCityPiece const&&) = delete;
};
class SectionGenerator {
public:
    SectionGenerator() = delete;
    SectionGenerator(SectionGenerator const&) = delete;
    SectionGenerator(SectionGenerator const&&) = delete;
};
enum SectionType;

#endif
