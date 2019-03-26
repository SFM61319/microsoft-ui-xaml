﻿using System;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;

namespace MUXControlsAdhocApp.FlexboxPages
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class FlexboxPage : Page
    {
        public FlexboxPage()
        {
            this.InitializeComponent();

            _contentFrame.Navigate(typeof(FlexboxPlayground));
        }

        private void NavigationView_BackRequested(Microsoft.UI.Xaml.Controls.NavigationView sender, Microsoft.UI.Xaml.Controls.NavigationViewBackRequestedEventArgs args)
        {
            Frame.GoBack();
        }

        private void NavigationView_ItemInvoked(Microsoft.UI.Xaml.Controls.NavigationView sender, Microsoft.UI.Xaml.Controls.NavigationViewItemInvokedEventArgs args)
        {
            string tag = args.InvokedItemContainer.Tag.ToString();
            switch (tag)
            {
                case "Home":
                    _contentFrame.Navigate(typeof(FlexboxPlayground));
                    break;

                case "Order":
                    _contentFrame.Navigate(typeof(FlexboxOrder));
                    break;

                case "Direction":
                    _contentFrame.Navigate(typeof(FlexboxDirectionPage));
                    break;
            }
            
        }
    }
}