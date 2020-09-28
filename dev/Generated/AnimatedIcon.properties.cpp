// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "AnimatedIcon.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(AnimatedIcon)
}

#include "AnimatedIcon.g.cpp"

GlobalDependencyProperty AnimatedIconProperties::s_AutoPlayProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_DiagnosticsProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_DurationProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_FallbackContentProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_IsAnimatedVisualLoadedProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_IsPlayingProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_PlaybackRateProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_PositionProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_SourceProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_StretchProperty{ nullptr };

AnimatedIconProperties::AnimatedIconProperties()
{
    EnsureProperties();
}

void AnimatedIconProperties::EnsureProperties()
{
    if (!s_AutoPlayProperty)
    {
        s_AutoPlayProperty =
            InitializeDependencyProperty(
                L"AutoPlay",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnAutoPlayPropertyChanged));
    }
    if (!s_DiagnosticsProperty)
    {
        s_DiagnosticsProperty =
            InitializeDependencyProperty(
                L"Diagnostics",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_DurationProperty)
    {
        s_DurationProperty =
            InitializeDependencyProperty(
                L"Duration",
                winrt::name_of<winrt::TimeSpan>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<winrt::TimeSpan>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_FallbackContentProperty)
    {
        s_FallbackContentProperty =
            InitializeDependencyProperty(
                L"FallbackContent",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnFallbackContentPropertyChanged));
    }
    if (!s_IsAnimatedVisualLoadedProperty)
    {
        s_IsAnimatedVisualLoadedProperty =
            InitializeDependencyProperty(
                L"IsAnimatedVisualLoaded",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_IsPlayingProperty)
    {
        s_IsPlayingProperty =
            InitializeDependencyProperty(
                L"IsPlaying",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_PlaybackRateProperty)
    {
        s_PlaybackRateProperty =
            InitializeDependencyProperty(
                L"PlaybackRate",
                winrt::name_of<double>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(1),
                winrt::PropertyChangedCallback(&OnPlaybackRatePropertyChanged));
    }
    if (!s_PositionProperty)
    {
        s_PositionProperty =
            InitializeDependencyProperty(
                L"Position",
                winrt::name_of<double>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPositionPropertyChanged));
    }
    if (!s_SourceProperty)
    {
        s_SourceProperty =
            InitializeDependencyProperty(
                L"Source",
                winrt::name_of<winrt::IAnimatedVisualSource>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<winrt::IAnimatedVisualSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSourcePropertyChanged));
    }
    if (!s_StretchProperty)
    {
        s_StretchProperty =
            InitializeDependencyProperty(
                L"Stretch",
                winrt::name_of<winrt::Stretch>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<winrt::Stretch>::BoxValueIfNecessary(winrt::Stretch::Uniform),
                winrt::PropertyChangedCallback(&OnStretchPropertyChanged));
    }
}

void AnimatedIconProperties::ClearProperties()
{
    s_AutoPlayProperty = nullptr;
    s_DiagnosticsProperty = nullptr;
    s_DurationProperty = nullptr;
    s_FallbackContentProperty = nullptr;
    s_IsAnimatedVisualLoadedProperty = nullptr;
    s_IsPlayingProperty = nullptr;
    s_PlaybackRateProperty = nullptr;
    s_PositionProperty = nullptr;
    s_SourceProperty = nullptr;
    s_StretchProperty = nullptr;
}

void AnimatedIconProperties::OnAutoPlayPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedIcon>();
    winrt::get_self<AnimatedIcon>(owner)->OnAutoPlayPropertyChanged(args);
}

void AnimatedIconProperties::OnFallbackContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedIcon>();
    winrt::get_self<AnimatedIcon>(owner)->OnFallbackContentPropertyChanged(args);
}

void AnimatedIconProperties::OnPlaybackRatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedIcon>();
    winrt::get_self<AnimatedIcon>(owner)->OnPlaybackRatePropertyChanged(args);
}

void AnimatedIconProperties::OnPositionPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedIcon>();
    winrt::get_self<AnimatedIcon>(owner)->OnPositionPropertyChanged(args);
}

void AnimatedIconProperties::OnSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedIcon>();
    winrt::get_self<AnimatedIcon>(owner)->OnSourcePropertyChanged(args);
}

void AnimatedIconProperties::OnStretchPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedIcon>();
    winrt::get_self<AnimatedIcon>(owner)->OnStretchPropertyChanged(args);
}

void AnimatedIconProperties::AutoPlay(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_AutoPlayProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool AnimatedIconProperties::AutoPlay()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_AutoPlayProperty));
}

void AnimatedIconProperties::Diagnostics(winrt::IInspectable const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_DiagnosticsProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
    }
}

winrt::IInspectable AnimatedIconProperties::Diagnostics()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_DiagnosticsProperty));
}

void AnimatedIconProperties::Duration(winrt::TimeSpan const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_DurationProperty, ValueHelper<winrt::TimeSpan>::BoxValueIfNecessary(value));
    }
}

winrt::TimeSpan AnimatedIconProperties::Duration()
{
    return ValueHelper<winrt::TimeSpan>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_DurationProperty));
}

void AnimatedIconProperties::FallbackContent(winrt::DataTemplate const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_FallbackContentProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
    }
}

winrt::DataTemplate AnimatedIconProperties::FallbackContent()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_FallbackContentProperty));
}

void AnimatedIconProperties::IsAnimatedVisualLoaded(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_IsAnimatedVisualLoadedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool AnimatedIconProperties::IsAnimatedVisualLoaded()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_IsAnimatedVisualLoadedProperty));
}

void AnimatedIconProperties::IsPlaying(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_IsPlayingProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool AnimatedIconProperties::IsPlaying()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_IsPlayingProperty));
}

void AnimatedIconProperties::PlaybackRate(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_PlaybackRateProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double AnimatedIconProperties::PlaybackRate()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_PlaybackRateProperty));
}

void AnimatedIconProperties::Position(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_PositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double AnimatedIconProperties::Position()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_PositionProperty));
}

void AnimatedIconProperties::Source(winrt::IAnimatedVisualSource const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_SourceProperty, ValueHelper<winrt::IAnimatedVisualSource>::BoxValueIfNecessary(value));
    }
}

winrt::IAnimatedVisualSource AnimatedIconProperties::Source()
{
    return ValueHelper<winrt::IAnimatedVisualSource>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_SourceProperty));
}

void AnimatedIconProperties::Stretch(winrt::Stretch const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_StretchProperty, ValueHelper<winrt::Stretch>::BoxValueIfNecessary(value));
    }
}

winrt::Stretch AnimatedIconProperties::Stretch()
{
    return ValueHelper<winrt::Stretch>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_StretchProperty));
}
