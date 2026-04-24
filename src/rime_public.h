/*
 * SPDX-FileCopyrightText: 2026 Fcitx5 for Android Contributors
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */
#ifndef FCITX5_RIME_PUBLIC_H
#define FCITX5_RIME_PUBLIC_H

#include <string>
#include <fcitx/addoninstance.h>
#include <fcitx/inputcontext.h>

FCITX_ADDON_DECLARE_FUNCTION(RimeEngine, getInput,
                             std::string(fcitx::InputContext *ic));

FCITX_ADDON_DECLARE_FUNCTION(
    RimeEngine, replaceInput,
    bool(fcitx::InputContext *ic, int start, int length,
         const std::string &replacement, int caretPos));

#endif // FCITX5_RIME_PUBLIC_H
