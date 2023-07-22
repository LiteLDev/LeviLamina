#pragma once
#include "liteloader/api/db/Row.h"
#include <vector>

#undef max

namespace DB
{

class RowSet : public std::vector<Row>
{

    using Base = std::vector<Row>;

public:
    std::shared_ptr<RowHeader> header; //!< The header of the rows

    /**
     * @brief Construct a new Row Set object
     *
     * @param header  The header(column names) of rows(shared_ptr)
     */
    LLAPI RowSet(const std::shared_ptr<RowHeader>& header = nullptr);
    /**
     * @brief Construct a new Row Set object
     *
     * @param header  The header(column names) of rows
     */
    LLAPI RowSet(const RowHeader& header);
    /// Move constructor
    LLAPI RowSet(RowSet&& set) noexcept;
    /// Copy constructor
    LLAPI RowSet(const RowSet& set);
    /// Move assignment operator
    LLAPI RowSet& operator=(RowSet&& set) noexcept;
    /// Copy assignment operator
    LLAPI RowSet& operator=(const RowSet& set);

    /**
     * @brief Add a row to the set.
     *
     * @param row  The row to add
     */
    LLAPI void add(const Row& row);
    /**
     * @brief Get if the set is valid
     * 
     * @return bool  True if valid
     */
    LLAPI bool valid();
    /**
     * @brief Add a row to the set.
     *
     * @param row  The row to add
     * @see   add(const Row&)
     */
    LLAPI void push_back(const Row& row);
    /**
     * @brief Convert to the table string.
     *
     * @param  nullPattern When the value is null, what to replace with(default '\<NULL\>')
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
    LLAPI std::string toTableString(const std::string& nullPattern = "<NULL>") const;
};

using ResultSet = RowSet;

} // namespace DB