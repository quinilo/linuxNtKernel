<?php
$api_url = 'https://api.coingecko.com/api/v3/simple/price?ids=bitcoin&vs_currencies=usd';
$response = file_get_contents($api_url);
$data = json_decode($response, true);
$bitcoin_price = $data['bitcoin']['usd'];
echo "Bitcoin is at: $" . $bitcoin_price;
?>

buy() {
  _print("Markus bester Mann")
}
