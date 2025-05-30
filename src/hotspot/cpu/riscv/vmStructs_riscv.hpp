/*
 * Copyright (c) 2015, 2025, Oracle and/or its affiliates. All rights reserved.
 * Copyright (c) 2020, 2021, Huawei Technologies Co., Ltd. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef CPU_RISCV_VMSTRUCTS_RISCV_HPP
#define CPU_RISCV_VMSTRUCTS_RISCV_HPP

// These are the CPU-specific fields, types and integer
// constants required by the Serviceability Agent. This file is
// referenced by vmStructs.cpp.

#define VM_STRUCTS_CPU(nonstatic_field, static_field, unchecked_nonstatic_field, volatile_nonstatic_field, nonproduct_nonstatic_field) \
  volatile_nonstatic_field(JavaFrameAnchor, _last_Java_fp, intptr_t*)

#define VM_TYPES_CPU(declare_type, declare_toplevel_type, declare_oop_type, declare_integer_type, declare_unsigned_integer_type)

#define VM_INT_CONSTANTS_CPU(declare_constant, declare_preprocessor_constant)

#define VM_LONG_CONSTANTS_CPU(declare_constant, declare_preprocessor_constant)

#endif // CPU_RISCV_VMSTRUCTS_RISCV_HPP
