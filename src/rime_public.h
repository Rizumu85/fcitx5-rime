/*
 * SPDX-FileCopyrightText: 2026 Fcitx5 for Android Contributors
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */
#ifndef FCITX5_RIME_PUBLIC_H
#define FCITX5_RIME_PUBLIC_H

#include <functional>
#include <string>
#include <fcitx/addoninstance.h>
#include <fcitx/inputcontext.h>

namespace fcitx {

enum class RimeAvailability {
    Unavailable = 0,
    Deploying = 1,
    Ready = 2,
    Failed = 3,
    Starting = 4,
};

using RimeAvailabilityCallback = std::function<void(RimeAvailability)>;

} // namespace fcitx

FCITX_ADDON_DECLARE_FUNCTION(RimeEngine, getInput,
                             std::string(fcitx::InputContext *ic));

FCITX_ADDON_DECLARE_FUNCTION(
    RimeEngine, replaceInput,
    bool(fcitx::InputContext *ic, int start, int length,
         const std::string &replacement, int caretPos));

FCITX_ADDON_DECLARE_FUNCTION(
    RimeEngine, setOption,
    bool(fcitx::InputContext *ic, const std::string &name, bool enabled));

FCITX_ADDON_DECLARE_FUNCTION(
    RimeEngine, setSchema,
    bool(fcitx::InputContext *ic, const std::string &schema));

FCITX_ADDON_DECLARE_FUNCTION(
    RimeEngine, setAvailabilityCallback,
    void(fcitx::RimeAvailabilityCallback callback));

#endif // FCITX5_RIME_PUBLIC_H
