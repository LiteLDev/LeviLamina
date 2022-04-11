#pragma once
#include "Row.h"
#include <vector>

#undef max

namespace DB
{

class RowSet : public std::vector<Row>
{
public:
    RowHeader& header; //!< The header of the rows(references, to avoid copying)

    /**
     * @brief Construct a new Row Set object
     *
     * @param header The header(column names) of rows(references)
     */
    LIAPI RowSet(RowHeader& header);
    /**
     * @brief Construct a new Row Set object with provided rows
     *
     * @param rows   Vector of rows
     * @param header The header(column names) of rows(references)
     */
    LIAPI RowSet(const std::vector<Row>& rows, RowHeader& header);
    /**
     * @brief Construct a new Row Set object with provided rows(move)
     *
     * @param rows   Vector of rows(rvalue)
     * @param header The header(column names) of rows(references)
     */
    LIAPI RowSet(std::vector<Row>&& rows, RowHeader& header);
    /// Move constructor
    LIAPI RowSet(RowSet&& set) noexcept;
    /// Copy constructor
    LIAPI RowSet(const RowSet& set);
    /// Move assignment operator
    LIAPI RowSet& operator=(RowSet&& set) noexcept;
    /// Copy assignment operator
    LIAPI RowSet& operator=(const RowSet& set);

    /**
     * @brief Convert to the table string.
     *
     * @param  nullPattern When the value is null, what to replace with(default '<NULL>')
     * @return std::string The result string
     * @par  sample
     * @code
     * |  a  |   b    |
     * |=====|========|
     * | awa | 114514 |
     * | qwq | 233    |
     * | ll  | <NULL> |
     * |=====|========|
     * @endcode
     */
    LIAPI std::string toTableString(const std::string& nullPattern = "<NULL>");
};

using ResultSet = RowSet;

} // namespace DB