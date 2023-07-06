# Single responsibility
> every class should have only one reason to change

You should become suspicious...
* when you have to mock a lot of members  
-> ok, it could still be a facade
* when you have to write a lot of expect statements

## Side effects

```plantuml
@startuml
  class SideEffect {
    +void HowDoYouCallAFriendOfFriend(String)
  }
  class Friend {
    +FriendOfFriend GetFriend()
  }
  class FriendOfFriend {
    +void SetNickname(String)
  }
  SideEffect *-- Friend
  Friend *-- FriendOfFriend
@enduml
```

