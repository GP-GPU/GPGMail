/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */


#import "FlaggedStatusToolbarItemDelegate-Protocol.h"
#import "MVMailboxSelectionOwner-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "MailTableViewDelegateDelegate-Protocol.h"
#import "MailVerticalSplitViewDelegate-Protocol.h"
#import "MailboxesOutlineViewControllerDelegate-Protocol.h"
#import "MessageTransferDelegate-Protocol.h"
#import "MessageViewerSearchFieldFocusDelegate-Protocol.h"
#import "NSAnimationDelegate-Protocol.h"
#import "NSSpeechSynthesizerDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "SearchScopeDelegate-Protocol.h"
#import "MessageMall-Protocol.h"

@class ActivityViewController, ColorBackgroundView, ExpandingSplitView, FavoritesBarView, FlaggedStatusToolbarItem, FullScreenWindowController, InvocationQueue, MailBarContainerView, MailToolbar, MailVerticalSplitView, MailboxPaneBottomView, MailboxesOutlineViewController, MessageListContainerView, MessageViewerLazyPopUpButton, MessageViewerSearchField, MessageViewingPaneController, NSAnimation, NSArray, NSButton, NSDictionary, NSMenu, NSMenuItem, NSMutableArray, NSMutableDictionary, NSNumber, NSScrollView, NSSet, NSString, NSTextField, NSTimer, NSToolbarItem, NSView, NSWindow, RichMessageListSortView, SafeBoolCache, SplitterAnimation, TableViewManager;

@interface MessageViewer : NSResponder <FlaggedStatusToolbarItemDelegate, MessageViewerSearchFieldFocusDelegate, NSToolbarDelegate, MailboxesOutlineViewControllerDelegate, MailTableViewDelegateDelegate, MessageTransferDelegate, MVMailboxSelectionOwner, MVTerminationHandler, SearchScopeDelegate, NSAnimationDelegate, NSSpeechSynthesizerDelegate, MailVerticalSplitViewDelegate, NSUserInterfaceValidations, NSWindowDelegate>
{
    id <MessageMall> _messageMall;
    InvocationQueue *_userTasks;
    TableViewManager *_tableManager;
    MessageViewingPaneController *_viewingPaneController;
    MailboxesOutlineViewController *_outlineViewController;
    NSWindow *_window;
    ExpandingSplitView *_splitView;
    NSScrollView *_messageListScrollView;
    MessageListContainerView *_messageListContainerView;
    MailVerticalSplitView *_verticalSplitView;
    NSView *_viewerContainer;
    ColorBackgroundView *_mailboxesView;
    ActivityViewController *_activityViewController;
    NSToolbarItem *_searchViewItem;
    NSString *_searchQuery;
    NSString *_searchPhrase;
    int _currentSearchField;
    int _currentSearchTarget;
    long long _selectedTag;
    NSMenu *_tableHeaderMenu;
    NSMenu *_sortByTableHeaderMenu;
    NSMenu *_messageColumnsMenu;
    NSMenu *_messageSortByMenu;
    NSMenuItem *_columnsMenuItem;
    NSMenuItem *_sortByMenuItem;
    NSMenuItem *_dateReceivedMenuItem;
    NSMenuItem *_dateSentMenuItem;
    NSMenuItem *_dateReceivedTableHeaderMenuItem;
    NSMenuItem *_dateSentTableHeaderMenuItem;
    FlaggedStatusToolbarItem *_flaggedStatusToolbarItem;
    NSToolbarItem *_fullScreenFlagMenuToolbarItem;
    MessageViewerLazyPopUpButton *_newMailboxButton;
    NSButton *_activityToggleButton;
    MessageViewerLazyPopUpButton *_actionButton;
    MailboxPaneBottomView *_mailboxPaneBottomView;
    struct CGSize _messageListUserSize;
    double _mailboxesPaneUserWidth;
    BOOL _shouldPreventTableViewResize;
    BOOL _shouldMakeTableViewSelectionVisible;
    BOOL _shouldMakeMessageSelectionVisible;
    BOOL _showingDefaultSearchString;
    BOOL _updatingSearchField;
    BOOL _allowShowingDeletedMessages;
    BOOL _suppressWindowTitleUpdates;
    BOOL _didSetupUI;
    long long _transferringFromViewingPane;
    double _restoreMailboxPaneToWidthAfterDragOperation;
    double _lastSplitViewPosition;
    double _lastMailboxSplitPosition;
    NSArray *_mailboxesToDisplayWhenVisible;
    NSString *_stringToSearchWhenVisible;
    BOOL _shouldCascadeWhenShowing;
    BOOL _mailboxPaneIsFinishingAnimation;
    MailToolbar *_toolbar;
    NSMutableDictionary *_toolbarItems;
    MessageViewerSearchField *_searchField;
    NSDictionary *_savedDefaults;
    NSMutableArray *_noteDocumentEditorsForPlainTextTransfer;
    NSArray *_messagesToDeleteAfterPlainTextTransferHasCompleted;
    NSSet *_initiallySelectedMessages;
    BOOL _pendingPlainTextTransfers;
    unsigned long long _numberOfPendingPlainTextTransfers;
    unsigned long long _viewerNumber;
    NSMutableArray *_transferOperations;
    NSDictionary *_plainTextTransferParameters;
    double _splitViewPositionBeforeSearch;
    SplitterAnimation *_splitViewAnimation;
    RichMessageListSortView *_sortView;
    SafeBoolCache *_atLeastOneSelectedMessageIsInOutboxCache;
    SafeBoolCache *_atLeastOneSelectedMessageIsInDraftsCache;
    NSNumber *_uniqueID;
    int _persistentID;
    BOOL _changingSplitViewOrientation;
    BOOL _initializedSearchDelay;
    double _performSearchDelay;
    MailBarContainerView *_mailBarContainerView;
    FavoritesBarView *_favoritesBarView;
    NSAnimation *_barContainerViewAnimation;
    NSTimer *_timeMachineRestoreSheetTimer;
    NSWindow *_timeMachineRestoreSheet;
    NSTextField *_timeMachineRestoreMessagesField;
    NSTextField *_timeMachineRestoreMailboxField;
    BOOL _timeMachineRestoreIsInProgress;
    FullScreenWindowController *_fullScreenWindowController;
    NSMutableArray *_noteMessageIDsHistories;
    NSMutableDictionary *_noteMessagesCachedIDs;
    BOOL _allowMessageListOrViewFreezing;
}

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allMessageViewers;
+ (id)allSingleMessageViewers;
+ (id)existingViewerForStore:(id)arg1;
+ (id)existingViewerForMailboxUid:(id)arg1;
+ (id)mailboxUidForFavoritesBarPosition:(unsigned long long)arg1;
+ (id)viewerForMailboxWithTag:(unsigned long long)arg1;
+ (id)existingViewerShowingMessage:(id)arg1;
+ (void)registerNewViewer:(id)arg1;
+ (void)deregisterViewer:(id)arg1;
+ (void)showAllViewers;
+ (id)mailboxUidsBeingViewed;
+ (id)frontmostMessageViewerWithOptions:(unsigned long long)arg1;
+ (void)searchForString:(id)arg1;
+ (unsigned long long)firstAvailableViewerNumber;
+ (id)_mailboxUidsForPaths:(id)arg1;
+ (void)retirePendingTALRestorations:(id)arg1;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (unsigned long long)deleteOperationForEvent:(id)arg1 isKeyPressed:(BOOL)arg2;
+ (void)saveAllViewersToDefaultsWithDelay;
+ (void)_saveAllViewersToDefaultsWithNotification:(id)arg1;
+ (void)saveAllViewersToDefaults;
+ (void)saveAllViewersToDefaultsOmittingViewer:(id)arg1;
+ (BOOL)restoreAllViewersFromDefaults;
+ (void)willRestoreAllViewersFromDefaults;
+ (void)didRestoreAllViewersFromDefaults;
+ (BOOL)isRestoringViewersFromDefaults;
+ (id)_messageViewersByUniqueID;
+ (id)messageViewerForUniqueID:(id)arg1;
+ (id)toolbarIdentifier;
- (unsigned long long)viewerNumber;
- (void)revealMessage:(id)arg1;
- (void)showCurrentMessageInMailbox;
- (void)_displayFollowup:(id)arg1;
- (void)_cantFindFollowupToMessage:(id)arg1;
- (void)showFollowupsToMessage:(id)arg1;
- (id)_mailboxUidsFromDefaults:(id)arg1;
- (void)awakeFromNib;
- (id)initWithSavedDefaults:(id)arg1;
- (void)intializeLazyPopUpButtons;
- (id)init;
- (id)initPlain;
- (id)initWithMailboxUids:(id)arg1;
- (void)dealloc;
- (void)release;
- (void)_registerForApplicationNotifications;
- (void)_unregisterForApplicationNotifications;
- (void)_registerForStoreNotifications;
- (void)_unregisterForStoreNotifications;
- (void)storeBeingInvalidated:(id)arg1;
- (int)currentPersistentID;
- (int)previousPersistentID;
- (void)restoreViewerForTAL;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (id)_store;
- (void)_setStore:(id)arg1;
- (BOOL)_selectedMailboxesAreOutgoing:(char *)arg1;
- (BOOL)_isViewingMailboxUid:(id)arg1;
- (BOOL)_isShowingMessage:(id)arg1;
- (id)window;
- (void)show;
- (void)showAndMakeKey:(BOOL)arg1;
- (struct CGImage *)newMessageViewerSnapshotForceNonFullScreen:(BOOL)arg1;
- (void)_updateWindowMinimumSize;
- (void)_setupUIAndOrderFront:(BOOL)arg1 andMakeKey:(BOOL)arg2;
- (id)tableHeaderViewGetDefaultMenu:(id)arg1;
- (id)messageListSortMenu;
- (void)_setUpWindowContents;
- (void)_setupMailboxOutlineView;
- (void)setupNextKeyViewLoopWithView:(id)arg1;
- (void)_setupNextKeyViewLoop;
- (void)_setUpMenus;
- (void)takeOverAsSelectionOwner;
- (void)resignAsSelectionOwner;
- (void)_updateMailboxPaneBottomViewColor;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillMiniaturize:(id)arg1;
- (void)openMailboxesPaneToWidth:(double)arg1 byAnimating:(BOOL)arg2;
- (void)_mailboxPaneAnimationDidFinish;
- (double)mailboxesPaneWidth;
- (BOOL)mailboxesPaneIsOpen;
- (void)setMailboxesPaneIsOpen:(BOOL)arg1;
- (BOOL)_mailboxesPaneIsOpenWideEnoughToUse;
- (void)_viewerLayoutPreferenceChanged:(id)arg1;
- (void)_splitViewDidFinishResizingSubviews;
- (void)_updateDividerTypeForSplitView;
- (void)_enableSplitViewAutosaving;
- (void)_disableSplitViewAutosaving;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitViewWillResizeSubviews:(id)arg1;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (void)toggleMailboxesPane:(id)arg1;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)_maximumSidebarWidth;
- (double)_maximumSidebarWidthForVerticalSplitViewWidth:(double)arg1;
- (struct CGSize)_minimumMessageViewerContentsSize;
- (struct CGSize)_minimumMessageListSize;
- (BOOL)_isPreviewPaneVisible;
- (struct CGSize)_minimumPreviewPaneSize;
- (void)mailVerticalSplitView:(id)arg1 willSetPosition:(double)arg2 ofDividerAtIndex:(long long)arg3 byAnimating:(BOOL)arg4;
- (BOOL)_shouldUseLayoutContraintsForWindow:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)_idealMailboxesViewWidth;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)updateMailboxButtonVisibility;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)prepareForTimeMachineRestore;
- (void)_displayTimeMachineRestoreSheet:(id)arg1;
- (void)_beginTimeMachineRestoreSheetIsForMailbox:(id)arg1;
- (void)_timeMachineRestoreFinished:(id)arg1;
- (void)_setAutorecalculatesContentBorderThickness:(BOOL)arg1;
- (id)selectedMailboxes;
- (id)expandedSelectedMailboxes;
- (id)expandedSelectedMailboxUidsAllowingSearch;
- (id)selectedMailbox:(BOOL)arg1;
- (id)selectedMailbox;
- (BOOL)isSelectedMailboxSpecial;
- (void)selectPathsToMailboxes:(id)arg1;
- (BOOL)mailboxIsExpanded:(id)arg1;
- (BOOL)sectionIsExpanded:(id)arg1;
- (id)expandedItems;
- (id)sortedSectionItemsForTimeMachine;
- (void)revealMailbox:(id)arg1;
- (id)mailboxSelectionWindow;
- (void)setSelectedMailboxes:(id)arg1;
- (void)setSelectedMailboxes:(id)arg1 scrollToVisible:(BOOL)arg2;
- (id)selectedMessages;
- (void)setSelectedMessages:(id)arg1;
- (BOOL)outgoingMailboxSelected;
- (void)_firstResponderIsViewingPane:(char *)arg1 isMessageList:(char *)arg2;
- (id)messagesTargetedByAction:(SEL)arg1;
- (id)messageIDsToShowAllCopiesOf;
- (void)showAllCopiesOfMessage:(id)arg1;
- (void)hideAllCopiesOfMessages:(id)arg1;
- (id)messagesIncludingHiddenCopies:(id)arg1;
- (id)currentDisplayedMessage;
- (id)messageThatUserIsProbablyReading;
- (void)outlineViewDoubleClick:(id)arg1;
- (void)_animationCompletedForPosition:(unsigned long long)arg1 withWindow:(id)arg2;
- (void)_animateMessageSelectionToFavoriteButtonAtPosition:(long long)arg1 withCount:(unsigned long long)arg2 image:(id)arg3 fromPosition:(struct CGPoint)arg4;
- (void)_moveMessagesToFavoriteWithMailboxUid:(id)arg1 andPosition:(unsigned long long)arg2;
- (void)selectMailbox:(id)arg1;
- (double)previewSplitPercentage;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)_mailboxWasRenamed:(id)arg1;
- (void)mailboxSelectionChanged:(id)arg1;
- (BOOL)messageViewerIsFinishedLoadingMessages;
- (void)_mallDidOpen;
- (void)_mallStructureDidChange;
- (void)_accountsDidChange:(id)arg1;
- (void)_mailboxesDidChange:(id)arg1;
- (void)_selectNextMessage:(id)arg1;
- (BOOL)isOnlySelectingSmartMailboxesThatShowRelatedMessages;
- (void)smartMailboxCriteriaChanged:(id)arg1;
- (void)_setMailboxUids:(id)arg1;
- (BOOL)_messages:(id)arg1 containMessagesWithReadStatusEqualTo:(BOOL)arg2;
- (long long)_messages:(id)arg1 stateForFlagColor:(BOOL)arg2;
- (BOOL)_messages:(id)arg1 containMessagesWithFlaggedStatusEqualTo:(BOOL)arg2;
- (BOOL)_messages:(id)arg1 containMessagesWithJunkMailLevelEqualTo:(int)arg2;
- (BOOL)_messagesContainMessagesWithAttachments:(id)arg1;
- (BOOL)atLeastOneSelectedMessageIsInOutbox:(id)arg1;
- (BOOL)_updatedAtLeastOneSelectedMessageIsInOutbox:(id)arg1;
- (BOOL)atLeastOneSelectedMessageIsInDrafts:(id)arg1;
- (BOOL)_updatedAtLeastOneSelectedMessageIsInDrafts:(id)arg1;
- (BOOL)shouldDeleteMessagesGivenCurrentState;
- (id)smartMailboxMemberMessagesForMessages:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)messageWasDisplayedInTextView:(id)arg1;
- (void)_messageNoLongerDisplayedInTextView:(id)arg1;
- (void)_messageThreadSummaryWasDisplayedInTextView:(id)arg1;
- (void)checkNewMail:(id)arg1;
- (void)replyMessage:(id)arg1;
- (void)replyAllMessage:(id)arg1;
- (void)replyToSender:(id)arg1;
- (void)replyToOriginalSender:(id)arg1;
- (void)showComposeWindow:(id)arg1;
- (BOOL)_showEditorForNote:(id)arg1;
- (void)showNoteEditor:(id)arg1;
- (void)showAddressPanel:(id)arg1;
- (void)undeleteMessages:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 allowingMoveToTrash:(BOOL)arg2;
- (void)archiveMessages:(id)arg1;
- (void)openMessages:(id)arg1;
- (void)_openMessages:(id)arg1 withModifiers:(unsigned long long)arg2;
- (void)selectAllMessages;
- (void)focusMessages;
- (void)focusMailboxes;
- (void)focusMessage;
- (void)replyViaIM:(id)arg1;
- (void)showAccountInfo:(id)arg1;
- (id)tableManager;
- (id)mailboxesOutlineViewController;
- (id)viewingPaneController;
- (id)editorWithType:(int)arg1 forSelectedMessages:(id)arg2;
- (void)redirectMessage:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)forwardAsAttachment:(id)arg1;
- (void)forwardWithParentAsAttachment:(id)arg1;
- (void)showToDoReferencedMessageInNewWindow:(id)arg1;
- (id)displaySelectedMessageInSeparateWindow:(id)arg1;
- (id)_documentsToDisplaySelectedMessagesInSeperateWindowWithModifiers:(unsigned long long)arg1;
- (id)_displaySelectedMessageInSeparateWindow:(id)arg1 withModifiers:(unsigned long long)arg2;
- (void)_openMessageInWebBrowser:(id)arg1;
- (void)renameMailbox:(id)arg1;
- (void)_moveOrCopyMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (void)moveMessagesToMailbox:(id)arg1;
- (void)copyMessagesToMailbox:(id)arg1;
- (id)_selectedMessagesWhoseFlag:(unsigned int)arg1 isEqualToState:(BOOL)arg2 action:(SEL)arg3;
- (void)_changeFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 undoActionName:(id)arg4;
- (id)appliedFlagColorsForSelectedMessages;
- (void)toggleFlaggedStatusInFullScreen:(id)arg1;
- (void)toggleFlaggedStatus:(BOOL)arg1;
- (void)toggleFlaggedStatus:(BOOL)arg1 forMessageListSelection:(BOOL)arg2;
- (id)_messagesWithoutFlagColor:(BOOL)arg1 fromMessages:(id)arg2;
- (void)_setFlaggedStatus:(id)arg1 withUndoActionName:(id)arg2;
- (id)_flaggedStatusForMessages:(id)arg1;
- (void)clearFlaggedStatus;
- (void)clearFlaggedStatusForMessageListSelection:(BOOL)arg1;
- (void)modifyFlaggedStatus:(id)arg1;
- (void)markMessageAsViewed:(id)arg1;
- (void)markMessagesAsViewed:(id)arg1;
- (void)scrollToMessageAbove:(id)arg1;
- (void)scrollToMessageBelow:(id)arg1;
- (void)markAsRead:(id)arg1;
- (void)markAsUnread:(id)arg1;
- (void)markAsReadFromToolbar:(id)arg1;
- (void)markAsUnreadFromToolbar:(id)arg1;
- (void)toggleFlag:(id)arg1;
- (void)clearFlaggedStatus:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)rebuildTableOfContents:(id)arg1;
- (void)_putMessageDataOntoPasteboard:(id)arg1 attributedString:(id)arg2 shouldDelete:(id)arg3 pasteboardType:(id)arg4;
- (void)_copyMessagesToPasteboard:(id)arg1 deleteWhenCopied:(BOOL)arg2 pasteboardType:(id)arg3 alternateType:(id)arg4;
- (void)_progressAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_showActivityProgressPanelForCopy:(id)arg1;
- (BOOL)_doCopy:(id)arg1 deleteWhenCopied:(BOOL)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (int)_pasteMessages:(id)arg1 unsuccessfulMessages:(id)arg2 flagsToSet:(id)arg3 destinationAccount:(id)arg4 destinationStore:(id)arg5;
- (void)_pasteData:(id)arg1 pasteboardType:(id)arg2 alternateData:(id)arg3 alternateType:(id)arg4 destination:(id)arg5;
- (void)paste:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)showPrintPanel:(id)arg1;
- (BOOL)send:(id)arg1 forDraft:(BOOL)arg2 actualMessage:(id)arg3;
- (BOOL)sendMessages:(id)arg1 forDraft:(BOOL)arg2;
- (BOOL)send:(id)arg1;
- (void)_batchSendSheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (void)saveAs:(id)arg1;
- (void)saveAllAttachments:(id)arg1;
- (void)quickLookSelectedAttachments:(id)arg1;
- (id)_contentControllerForAction:(SEL)arg1;
- (void)forwardAction:(SEL)arg1 ToContentControllerFromSender:(id)arg2;
- (void)makeFontBigger:(id)arg1;
- (void)makeFontSmaller:(id)arg1;
- (void)viewSource:(id)arg1;
- (void)showAllHeaders:(id)arg1;
- (void)showFilteredHeaders:(id)arg1;
- (void)showFirstAlternative:(id)arg1;
- (void)showPreviousAlternative:(id)arg1;
- (void)showNextAlternative:(id)arg1;
- (void)showBestAlternative:(id)arg1;
- (void)changeTextEncoding:(id)arg1;
- (void)takeFindStringFromSelection:(id)arg1;
- (id)findTarget;
- (void)jumpToSelection:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (id)_criterionForMailbox:(id)arg1;
- (id)mailboxSearchCriterionForScope:(int)arg1 containsSentMailbox:(char *)arg2 containsTrashMailbox:(char *)arg3 shouldExcludeJunk:(char *)arg4;
- (void)searchIndex:(id)arg1;
- (BOOL)_isShowingSearchResults;
- (unsigned long long)_searchResultCount;
- (BOOL)_canSaveSearchWithTarget:(int)arg1;
- (BOOL)_canSearchSelectedMailboxes;
- (void)_showSearchResultsInSearchView;
- (void)_hideSearchResultsInSearchView;
- (void)_searchForString:(id)arg1;
- (void)_searchForSuggestions:(id)arg1;
@property(copy, nonatomic) NSString *searchPhrase;
- (void)_updateSearchStatus;
- (void)_clearSearchByAnimating:(BOOL)arg1;
- (void)clearSearch:(id)arg1;
- (void)_setupSearchParametersForTag:(long long)arg1;
- (int)_searchField;
- (int)searchTarget;
- (BOOL)_anySearchMailboxesAreCached;
- (void)_updateContentSearchEnabledState;
- (void)_updateContentSearchEnabledStateFromSpotlight;
- (void)_setContentSearchEnabled:(BOOL)arg1 disabledExplanation:(id)arg2;
- (void)_handleAttachmentsRemovedFromMessages:(id)arg1 newMessages:(id)arg2;
- (void)_removeAttachmentsFromMessages:(id)arg1 fromStores:(id)arg2;
- (void)removeAttachments:(id)arg1;
- (void)sortByTagOfSender:(id)arg1;
- (void)toggleAscendingSort:(id)arg1;
- (void)focus:(id)arg1;
- (void)unfocus:(id)arg1;
- (void)openAllThreads:(id)arg1;
- (void)closeAllThreads:(id)arg1;
- (void)toggleThreadedMode:(id)arg1;
- (void)toggleViewRelatedMessages:(id)arg1;
- (BOOL)shouldShowThreadControlForMessage:(id)arg1 isSelectedRow:(BOOL)arg2;
- (void)updateViewingPaneBackgroundColor;
- (void)selectThread:(id)arg1;
- (void)selectPreviousInThread:(id)arg1;
- (void)selectNextInThread:(id)arg1;
- (void)showDeletions:(id)arg1;
- (void)hideDeletions:(id)arg1;
- (void)toggleContentsColumn:(id)arg1;
- (void)toggleMessageNumbersColumn:(id)arg1;
- (void)toggleMessageFlagsColumn:(id)arg1;
- (void)toggleFromColumn:(id)arg1;
- (void)togglePresenceColumn:(id)arg1;
- (void)toggleToColumn:(id)arg1;
- (void)toggleDateSentColumn:(id)arg1;
- (void)toggleDateReceivedColumn:(id)arg1;
- (void)toggleLocationColumn:(id)arg1;
- (void)toggleAuthorColumn:(id)arg1;
- (void)toggleSizeColumn:(id)arg1;
- (void)writeDefaultsToArray:(id)arg1;
- (id)dictionaryRepresentation;
- (void)_findSomeDefaultsIfNecessary;
- (void)_setupFromDefaults;
- (id)_viewerDefaultsKeyFormats;
- (void)_teardownDefaults;
- (void)_copyDefaultsFromViewerNumber:(unsigned long long)arg1 toViewerNumber:(unsigned long long)arg2;
- (id)_countStringForType:(BOOL)arg1 isDrafts:(BOOL)arg2 omitUnread:(BOOL)arg3 totalCount:(unsigned long long *)arg4;
- (void)_messageUpdated:(id)arg1;
- (void)documentsTransferred:(id)arg1;
- (void)_updateWindowTitle;
- (void)_reallyUpdateWindowTitle;
- (id)_columnOrDetailMenuItemTitle;
- (void)_updateMallUids:(id)arg1;
- (void)_setSplitViewPercentage:(double)arg1 animate:(BOOL)arg2;
- (void)messagesWereSelected:(id)arg1 fromTableViewManager:(id)arg2;
- (void)selectedMessagesDidChangeInMessageList;
- (void)actionMessageDidChangeInConversationView;
- (id)actionMessageForConversationView;
- (void)messageWasDoubleClicked:(id)arg1;
- (void)messageDragWillStartWithEvent:(id)arg1;
- (void)messageDragMovedTo:(struct CGPoint)arg1;
- (void)messageDragDidEnd;
- (BOOL)transferSelectedMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (void)beginTransferFromViewingPane;
- (void)endTransferFromViewingPane;
- (void)_transferSelectedMessagesToExchangeMailboxAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)_noteDocumentEditorHasInitialized:(id)arg1;
- (void)_transferPlainTextCopiesOfMessagesWithParameters:(id)arg1;
- (id)_alertForConvertingToPlainTextNote;
- (BOOL)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3;
- (BOOL)archiveMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (void)filterMessagesToMoveOrDelete:(id)arg1;
@property(copy, nonatomic) NSSet *initiallySelectedMessages; // @synthesize initiallySelectedMessages=_initiallySelectedMessages;
- (void)_reallyAnimateProgressInidicator;
- (void)_updateSearchStatusWithDelay;
- (void)threadDidExpand;
- (void)threadDidCollapse;
- (void)clearUndoRedoStacksUnconditionally:(BOOL)arg1;
- (void)searchWillStart;
- (void)searchDidFinish;
- (void)searchDidUpdate;
- (id)selectedMailboxUids;
- (void)_updateSearchUIForSender:(id)arg1;
- (void)_performCoalescedSearch;
- (void)performSearch:(id)arg1;
- (void)saveSearch:(id)arg1;
- (void)reapplySortingRules:(id)arg1;
- (void)_returnToSenderSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_deleteMessagesAfterBounce:(id)arg1;
- (void)_bounceMessages:(id)arg1;
- (void)returnToSender:(id)arg1;
- (void)addSenderToAddressBook:(id)arg1;
- (void)markAsJunkMail:(id)arg1;
- (void)_markMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)_deleteJunkedMessages:(id)arg1 inStores:(id)arg2 moveToTrash:(BOOL)arg3;
- (void)_synchronouslyMarkAsJunkMail:(id)arg1 inStores:(id)arg2 delete:(BOOL)arg3;
- (void)_undoMarkMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)markAsNotJunkMail:(id)arg1;
- (void)_markMessagesAsNotJunkMail:(id)arg1 stores:(id)arg2;
- (void)_synchronouslyMarkAsNotJunkMail:(id)arg1 inStores:(id)arg2;
- (BOOL)transferMessages:(id)arg1 toMailbox:(id)arg2 deleteOriginals:(BOOL)arg3 allowUndo:(BOOL)arg4 isDeleteOperation:(BOOL)arg5 isArchiveOperation:(BOOL)arg6;
- (void)_reportError:(id)arg1;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (void)hideMessagesForMessageTransfer:(id)arg1;
- (void)unhideMessagesForMessageTransfer:(id)arg1;
- (void)messageTransferDidTransferMessages:(id)arg1;
- (void)messageTransferDidUndoTransferOfMessages:(id)arg1;
- (id)undoManagerForMessageTransfer:(id)arg1;
- (void)_updateSearchItemLabel;
- (void)_createUniqueID;
- (void)setWithoutAnimationBarContainerVisibility:(BOOL)arg1 forFullScreen:(BOOL)arg2;
- (void)toggleShowBarContainer:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (BOOL)animationShouldStart:(id)arg1;
- (void)_animationDidEndOrStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (BOOL)isFullScreen;
- (void)presentModalWindowWithDelegate:(id)arg1;
- (void)closeModalWindowForcibly:(BOOL)arg1 animate:(BOOL)arg2;
- (void)closeModalWindowForcibly:(BOOL)arg1 animate:(BOOL)arg2 animationType:(long long)arg3;
- (void)willAttachModalWindowWithDelegate:(id)arg1;
- (void)attachModalWindowWithDelegate:(id)arg1;
@property(readonly) FullScreenWindowController *fullScreenWindowController; // @synthesize fullScreenWindowController=_fullScreenWindowController;
- (void)initFullScreenController;
- (void)_windowWillEnterFullScreen:(id)arg1;
- (void)_windowWillExitFullScreen:(id)arg1;
- (void)_windowDidExitFullScreen:(id)arg1;
- (BOOL)hasModalWindow;
- (BOOL)isModal;
- (BOOL)usesCustomFullScreenAnimation;
- (id)customWindowsToExitFullScreenForWindow:(id)arg1;
- (void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (id)_IDForNoteMessage:(id)arg1;
- (void)startRecordingHistoryOfNoteMessage:(id)arg1;
- (void)stopRecordingHistoryOfNoteMessage:(id)arg1;
- (BOOL)isNoteMessage:(id)arg1 aNewVersionOfNoteMessage:(id)arg2;
- (BOOL)isNoteMessageMarkedForOverwrite:(id)arg1;
- (void)_noteMessageWillBeUpdated:(id)arg1;
- (void)_alwaysShowDuplicatesDidChange:(id)arg1;
- (void)freezeMessageListAndView;
- (void)unfreezeMessageListAndView;
- (void)unfreezeMessageList;
- (void)unfreezeMessageView;
- (void)freezeAndDimMessageView;
- (void)unfreezeAndUndimMessageView;
@property(readonly) MailVerticalSplitView *verticalSplitView; // @synthesize verticalSplitView=_verticalSplitView;
@property(readonly) ExpandingSplitView *splitView; // @synthesize splitView=_splitView;
@property(readonly) FavoritesBarView *favoritesBarView; // @synthesize favoritesBarView=_favoritesBarView;
@property(readonly) MailBarContainerView *mailBarContainerView; // @synthesize mailBarContainerView=_mailBarContainerView;
- (id)uniqueID;
- (id)objectSpecifier;
- (id)allMessages;
- (id)focusedMessages;
- (void)setFocusedMessages:(id)arg1;
- (unsigned int)appleScriptSortColumn;
- (void)setAppleScriptSortColumn:(unsigned int)arg1;
- (BOOL)isSortedAscending;
- (void)setIsSortedAscending:(BOOL)arg1;
- (BOOL)previewPaneVisible;
- (void)setPreviewPaneVisible:(BOOL)arg1;
- (id)visibleColumns;
- (void)setVisibleColumns:(id)arg1;
- (id)inbox;
- (id)outbox;
- (id)draftsMailbox;
- (id)sentMailbox;
- (id)trashMailbox;
- (id)junkMailbox;
- (void)setScriptingProperties:(id)arg1;
- (void)setupToolbar;
- (void)clearToolbarItemsTarget;
- (id)toolbarConfigurationDict;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateFlaggedStatusToolbarItem:(id)arg1;
- (void)configureSegmentedItem:(id)arg1 withDictionary:(id)arg2 forSegment:(long long)arg3;
- (void)_asyncUpdateSuggestionsFlagNames:(id)arg1;
- (void)_updateSuggestionsFlagNames;
- (void)_asyncUpdateSuggestionsMailboxesListAndFlagNames:(id)arg1;
- (void)_updateSuggestionsMailboxesListAndFlagNames;
- (void)setupSuggestionsSearchField;
- (void)setupSuggestionsSearchFieldForSentMailboxIfNecessary;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (void)updateToolbar;
- (void)toolbarWillAddItem:(id)arg1;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarDidReorderItem:(id)arg1;
- (void)_ensureItemVisibilityInToolbar:(long long)arg1 identifier:(id)arg2;
- (void)ensureSearchFieldVisibilityInToolbar;
- (void)searchFieldDidEndSearching:(id)arg1;
- (void)finishedSettingFlaggedStatus;
- (void)_synchronizeFullScreenFlagToolbarItem:(id)arg1;
- (void)submenuAction:(id)arg1;

@end
