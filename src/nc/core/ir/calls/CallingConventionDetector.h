/* * SmartDec decompiler - SmartDec is a native code to C/C++ decompiler
 * Copyright (C) 2015 Alexander Chernov, Katerina Troshina, Yegor Derevenets,
 * Alexander Fokin, Sergey Levin, Leonid Tsvetkov
 *
 * This file is part of SmartDec decompiler.
 *
 * SmartDec decompiler is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * SmartDec decompiler is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SmartDec decompiler.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <nc/config.h>

#include <nc/common/Types.h>

namespace nc {
namespace core {
namespace ir {
namespace calls {

class CallingConvention;

/**
 * Detector of calling conventions.
 */
class CallingConventionDetector {
    public:

    /**
     * Virtual destructor.
     */
    virtual ~CallingConventionDetector() {}

    /**
     * This function detects the calling convention of a function with given descriptor and sets it in the CallsData via the setCallingConvention() method.
     *
     * \param[in] descriptor Descriptor of a function.
     */
    virtual void detectCallingConvention(const FunctionDescriptor &descriptor) const = 0;
};

} // namespace calls
} // namespace ir
} // namespace core
} // namespace nc

/* vim:set et sts=4 sw=4: */
